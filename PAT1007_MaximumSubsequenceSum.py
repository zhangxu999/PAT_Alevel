#import random
K=int(input())
#sl=list(map(lambda x:int(x),input().split(" ")))
'''
sl=[]
for x in range(K):
	sl.append(random.randint(-1000,1000))
data=[]
flag=True
maxs=[]
Xmax=0;Ymax=0
t1=time.time()
for x in range(K):
	if flag and sl[x]>=0:
		flag=False
'''
tl=input()
sl=[3,2,45,1,-9,4,77]

def getMaxSeq(sl):
	K=len(sl)
	data=[]
	flag=True
	maxs=[]
	for x in range(K):
		if flag and sl[x]>=0:
			flag=False
	if flag:
		print('0 '+str(sl[0])+' '+str(sl[K-1]))
	else:
		maxs=[0,0,sl[0]]
    	for x in range(K):
    		data=['']*K
	    	data[x]=sl[x]
	    	if data[x]>maxs[2]:
	    		maxs=[x,x,sl[x]]
	    	for y in range(x+1,K):
	    		data[y]=data[y-1]+sl[y]
	    		if data[y]>maxs[2]:
	    			maxs=[x,y,data[y]]
	    	print(maxs)
	print(str(maxs[2])+" "+str(sl[maxs[0]])+" "+str(sl[maxs[1]]))
	print(maxs)
    #print(str(maxs[2])+" "+str(sl[maxs[0]])+" "+str(sl[maxs[1]]))
getMaxSeq(sl)