#node=[data,rank,parent]
def make_set(N,m):
    t=[""]
    for x in range(1,N+1):
        node={}
        node["data"]=x
        node["rank"]=0
        node["parent"]=x
        t.append(node)
    t[m]=""
    return t
def Find_set(t,x):
    if x!=t[x]["parent"]:
        return Find_set(t,t[x]["parent"])
    else:
        return x
def Union(t,i,j):
    x=Find_set(t,i)
    y=Find_set(t,j)

    if (t[x]["rank"]>t[y]["rank"]):
        t[y]["parent"]=x
    else:
        t[x]["parent"]=y
        if t[x]["rank"]==t[y]["rank"]:
            t[y]["rank"]+=1
def UFS():
    N,M,K=list(map(lambda x: int(x),input().split(" ")))
    #N,M,K=[3,2,3]
    highway=[]
    
    for x in range(M):
        tmp=list(map(lambda x: int(x),input().split(" ")))
        highway.append(tmp)
    Check=list(map(lambda x: int(x),input().split(" ")))
    
    #Check=[1,2,3]
    for y in Check:
        Tree=make_set(N,y)
        visited=[""].extend([False]*N)
        for h in highway:
            if h[0] !=y and h[1]!=y:
                Union(Tree,h[0],h[1],visited)
        cnt=0
        for x in Tree:
            if x!="" and x["data"]==x["parent"]:
                cnt+=1
        print(cnt-1)
UFS()

