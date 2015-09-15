from functools import reduce
nums=int(input())
Inerist=235959
OutLatest=0
early=""
late=""
for x in range(nums):
    recond=input().split(" ")
    In=int(reduce(lambda x,y:x+y,recond[1].split(":")))
    Out=int(reduce(lambda x,y:x+y,recond[2].split(":")))
    if In<Inerist:
		Inerist=Inearly=recond[0]
		if Out>OutLatest:
                OutLatest=Out
		late=recond[0]
print(early+" "+late)


