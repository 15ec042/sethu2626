na=input("enter n value\n")
sdd=[]
for i in range(0,na):
	ba=int(input())
	sdd.append(ba)
sdd.sort()
if(na%2 != 0):
	print(sdd[(na/2)])
else:
	s=na/2
	c=(int(sdd[s])+int(sdd[s-1]))/2
	print(c)
