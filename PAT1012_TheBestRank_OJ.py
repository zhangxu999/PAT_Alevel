import copy

#N=5
#M=6
#allData=[['310101',98,85,88],['310102',70,95,88],['310103',82,87,94],['310104',91,91,91],['310105',85,90,90]]
#NeedCheck=['310101','310102','310103','310104','310105','999999',]
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
N,M=list(map(lambda x:int(x),input().split(" ")))
for x in range(N):
    In=input().split(" ")
    #In=allData[x]
    tmp=list(map(lambda x:int(x),In[1:]))
    tmp.insert(0,sum(tmp))
    data[In[0]]=tmp
    ID.append(In[0])
for x in range(4):
    QuickSort(ID,0,N-1,data,x)
    mm=copy.copy(ID)
    Ranks.append(mm)
for x in range(M):
    stu_id=input()
    #stu_id=NeedCheck[x]
    if stu_id not in data.keys():
        print("N/A")
    else:
        Max=[items[0],Ranks[0].index(stu_id)]
        for i,x in enumerate(Ranks):
            index=x.index(stu_id)
            while index>=0 and data[x[index]][i]==data[x[index-1]][i]:
                index-=1
            if index<Max[1]:
                Max=[items[i],index]
        print(str(Max[1]+1)+" "+Max[0])



