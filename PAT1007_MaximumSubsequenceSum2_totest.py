K=int(input())
sl=list(map(lambda x:int(x),input().split(" ")))
def getMax(num1,num2,num3):
	#Max=getMax([x,x,sl[x]],Max,[x,Max[1],addNew])
	if num1[2]>=num2[2]:
		if num1[2]>=num3[2]:
			return num1
		else:
			return num3
	else:
		if num3[2]>=num2[2]:
			return num3
		else:
			return num2
def getMaxSeq(sl,K):flag=True
currMax=[]
Max=[]
for x in range(K):
    if sl[x]>0:
    	flag=False
    	break
if flag:
	print("0"+" "+str(sl[0])+" "+str(sl[K-1]))
else:
    for x in range(K-1,-1,-1):
	    if x==K-1:
	    	currMax=[K-1,sl[K-1]]
	    	Max=[K-1,K-1,sl[K-1]]
	    	print(Max)
	    else:
	    	addNew=sl[x]+currMax[1]
	    	if sl[x]>=addNew:
	    		currMax=[x,sl[x]]
	    	else:
	    		currMax[1]=addNew
	    	Max=getMax([x,x,sl[x]],Max,[x,Max[1],addNew])
	    	#print(Max)
print(str(Max[2])+" "+str(sl[Max[0]])+" "+str(sl[Max[1]]))