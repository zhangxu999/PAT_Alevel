fl=list(map(lambda x :float(x),input().split(" ")))[1:]
sl=list(map(lambda x :float(x),input().split(" ")))[1:]
#fl=[44,2,99,1,5,2]
#sl=[8,3,4,6,6,4]
dict={}
for x,y in enumerate(fl):
    if x%2==0:
        dict[y]=fl[x+1]
for x,y in enumerate(sl):
    if x%2==0:
        if y in dict.keys():
            dict[y]+=sl[x+1]
        else:
            dict[y]=sl[x+1]
cnt=len(dict)
all=[]
lend=len(all)
left=0
right=lend-1
middle=(left+right)//2
flag=True
for x in dict:
    if len(all)==0:
        all.append(x)
    else:
        for m,n in enumerate(all):
            if x>n:
                all.insert(m,x)
                flag=False
                break
        if flag:
            all.append(x)
print(str(len(dict))+" "+" ".join(map(lambda x:str(x)+" "+str(dict[x]),all)))

