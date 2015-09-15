#K = int(input())
#sl = list(map(lambda x: int(x), input().split(" ")))
#Max=getMax([x,x,sl[x]],Max,[x,Max[1],addNew])
def getMax(New, Max, addNew):
	if New[2]>=Max[2]:
		if New[2]>=addNew[2] :
			return New
		else:
			return addNew
	else:
		if addNew[2]>Max[2]:
			return addNew
		else:
			return Max
def getMaxSeq(sl, K):
	flag=True
	currMax=[]
	Max=[]
	for x in range(K):
		if sl[x]>=0:
			flag=False
	if flag:
		#print("0"+" "+str(sl[0])+" "+str(sl[K-1]))
		return [0,sl[0],sl[K-1]]
	else:
		for x in range(K-1,-1,-1):
			if x==K-1:
				currMax=[K-1,sl[K-1]]
				Max=[K-1,K-1,sl[K-1]]
			else:
				addNew=sl[x]+currMax[1]
				if sl[x]>=addNew:
					currMax=[x,sl[x]]
				else:
					currMax[1]=addNew
				Max=getMax([x,x,sl[x]],Max,[x,Max[1],addNew])
		return [Max[2],sl[Max[0]],sl[Max[1]]]