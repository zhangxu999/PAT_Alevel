K=int(input())
sl=list(map(lambda x:int(x),input().split(" ")))
data=[]
flag=False
maxs=[]
Xmax=0;Ymax=0
for x in range(K):
	if not flag:
		if x>0:
			flag=True
	data.append(['']*K)
	data[x][x]=sl[x]
if flag:
	print('0 '+str(sl[0])+' '+str(sl[K-1]))
else:
	maxs=[[0,0]]
	for x in range(K):
		for y in range(x+1,K):
			data[x][y]=data[x][y-1]+data[y][y]
			if data[x][y]>data[Xmax][Ymax]:
				maxs=[[x,y]]
				Xmax=x
				Ymax=y
			if data[x][y]==data[Xmax][Ymax]:
				maxs.append([x,y])
	if len(maxs)==1:
		print(str(data[Xmax][Ymax])+" "+str(sl[Xmax])+" "+str(sl[Ymax]))
	else:
		M=maxs[0]
		for j in maxs:
			if j[0]<
