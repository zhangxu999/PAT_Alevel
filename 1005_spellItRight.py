from functools import reduce
data={'0':'zero','1':'one','2':'two','3':'three','4':'four','5':'five','6':'six','7':'seven','8':'eight','9':'nine'}
line=map(lambda x:int(x),input())
sums=str(reduce(lambda x,y:x+y,line))
ret=' '.join(map(lambda x:data[x],sums))
print(ret)