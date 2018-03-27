x=int(input())
y=int(input())
for n in range(x+1,y):
	f=0
	for i in range(2,n//2):
			if n%i==0:
				f=1
				break
	if f==0:
print(n)
