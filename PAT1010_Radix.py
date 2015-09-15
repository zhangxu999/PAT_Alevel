N1,N2,tag,Radix=input().split(" ")
IM="Impossible"
def CharToDec(num):
    ordnum=ord(x)
    if ordnum>=97:
        return ordnum-87
    else:
        return ordnum-48

def XtoDecimal(num,radix):
    dec=0
    for x in num:
        dec+=CharToDec(x)*radix
    return dec
def MinRadix(SolveNum,tag):
    tmp=2
    for x in SolveNum:
        curr=CharToDec(x)+1
        if curr>tmp:
            tmp=curr
    if tmp>tag:
        return tmp
    else:
        return tag

def toSolve(Known,sovle,pMR):



possMinRadix=2
Known=N1
Solve=N2
if tag==2:
    Solve=N1
    Known=N2
possMinRadix=MinRadix(Known,Solve)
knownDec=XtoDecimal(Known,tag)
SolveDec=XtoDecimal(Solve,possMinRadix)
if knownDec>SolveDec:
    toSolve(knownDec,Solve,possMinRadix)
elif knownDec>SolveDec:
    toSolve(Solve,Known,possMinRadix)
else:
    print(possMinRadix)





