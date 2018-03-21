st1=input("Enter the 1st String: ")
st2=input("Enter the 2nd String: ")
a=list(st1)
b=list(st2)
for x in range(len(p)-1):
	flag=0
	for y in range(x+1,len(p)):
		if (p[x]==p[y]):
			p[y]='*'
			flag=1
	if flag==1:
		p[x]='*'
	elif(flag==0) and p[x]!='*':
		p[x]='#'
for x in range(len(q)-1):
	flag=0
	for y in range(x+1,len(q)):
		if q[x]==q[y]:
			q[y]='*'
			flag=1
	if flag==1:
		q[x]='*'
	elif(flag==0) and q[x]!='*':
		q[x]='#'
if(p[len(p)-1]!='*'):
	p[len(p)-1]='#'
if(q[len(q)-1]!='*'):
	q[len(q)-1]='#'
ans1=''
ans2=''
for x in p:
	ans1=ans1+x
for x in q:
	ans2=ans2+x
if(ans1==ans2):
	print("The strings are isomorphic")
else:
	print("The strings are not isomorphic")
