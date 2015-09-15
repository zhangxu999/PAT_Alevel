#import random
#import time
#K=int(input())
#sl=list(map(lambda x:int(x),input().split(" ")))
#sl=[]
'''
for x in range(K):
	m=random.randint(-1000,1000)
	sl.append(m)
	if m>0:
		flag=False

#print(sl)
'''
def getMax(num1,num2,num3):
	#Max=getMax([x,x,sl[x]],Max,[x,Max[1],addNew])
	if num1[2]>=num2[2]:
		if num1[2]>=num3[2]:
			print(num1,"max")
			print(num2)
			print(num3)
			return num1
		else:
			print(num1)
			print(num2)
			print(num3,"max")
			
			return num3
	else:
		if num3[2]>=num2[2]:
			print(num1)
			print(num2)
			print(num3,"max")
			
			return num3
		else:
			print(num1)
			print(num2,"max")
			print(num3)
			
			return num2
def getMaxSeq(sl):
	K=len(sl)
	flag=True
	currMax=[]
	Max=[]
	for x in range(K):
		if sl[x]>0:
			flag=False
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
		    	print("~~~~~~~~~~~~~~")
		    	#print(Max)
	print(str(Max[2])+" "+str(sl[Max[0]])+" "+str(sl[Max[1]]))
	print(Max)
#getMaxSeq([-1,3,-9,555,23,-32,211,105])