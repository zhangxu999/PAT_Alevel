wtl=['W','T','L']
data=[]
S=1
def getmax(num1,num2):
  if num1>num2:
    return num1
  else:
    return num2
for x in range(3):
  tmp=list(map(lambda x :float(x),input().split(" ")))
  M=max(tmp)
  maxindex=tmp.index(M)
  data.append(wtl[maxindex])
  S*=M
print(" ".join(data)+" "+"%.2f"%(((S*0.65)-1)*2))