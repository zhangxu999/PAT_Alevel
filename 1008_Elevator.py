fl=list(map(lambda x:int(x),input().split(" ")))[1:]
K=len(fl)
times=0
pos=0
dest=0
for y in fl:
	dest=y
	tmp=dest-pos
	if tmp>=0:
		times+=(tmp*6)+5
	else:
		times+=(-tmp*4)+5
	pos=dest
print(times)
