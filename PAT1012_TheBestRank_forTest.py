import copy
#N,M=list(map(lambda x:int(x),input().split(" ")))
#N=0
#M=0
#allData=[]
#NeedCheck=[]
data={}
ID=[]
items=["A","C","M","E"]
Ranks=[]
def QuickSort(a,low,high,dt,item):
    if low>=high:
        return
    i=low
    j=high
    key=a[i]
    while i<j :
        while i<j and dt[a[j]][item]<=dt[key][item]:
            j-=1
        a[i]=a[j]
        while i<j and dt[a[i]][item]>=dt[key][item]:
            i+=1
        a[j]=a[i]
    a[i]=key
    QuickSort(a,low,high-1,dt,item)
    QuickSort(a,low+1,high,dt,item)


def bank(N,M,allData,NeedCheck):
    for x in range(N):
        ret=[]
        #In=input().split(" ")
        In=allData[x]
        tmp=list(map(lambda x:int(x),In[1:]))
        tmp.insert(0,sum(tmp)/3)
        data[In[0]]=tmp
        ID.append(In[0])
    for x in range(4):
        Ranks.append(copy.copy(QuickSort(ID,0,N-1,data,x)))

    for x in range(M):
        #stu_id=input()
        stu_id=NeedCheck[x]
        if stu_id not in data.keys():
            #print("N/A")
            ret.append("N/A")
            

        else:
            Max=[items[0],Ranks[0].index(stu_id)]
            for i,x in enumerate(Ranks):
                index=x.index(stu_id)
                while index>=0 and data[x[index]][i]>=data[x[index-1]][i]:
                    index-=1
                if index>Max[0][1]:
                    Max=[item[i],index]
            #print(str(Max[1])+" "+Max[0])
            ret.append(Max)
    return ret


