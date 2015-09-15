line=list(map(lambda x:int(x),input().split(" ")))
A=line[0]
B=line[1]

outStr=str(A+B)
#print(A,B)
#print(outStr)
finnal=""
length=len(outStr)
cnt=0
if (outStr[0]=="-" and len(outStr)<=4) or (outStr[0]!="-" and len(outStr)<4):
    print(outStr)
else:
    for i in range(length-1,-1,-1):
        cnt=cnt+1
        if cnt%3==0:
            finnal=(","+outStr[i:i+3])+finnal
    num=length%3
    finnal=outStr[0:num]+finnal
    #print(finnal)
    if finnal[0]==",":
        finnal=finnal[1:]
    try:
        if finnal[0]=="-" and finnal[1]==",":
            finnal=finnal[0]+finnal[2:]
    except:
        pass
    print(finnal)
