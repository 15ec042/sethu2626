def fn(z):
	if z=='X':
		return 10
	if z=='I':
		return 1
	if z=='V':
		return 5
	else:
		return 0
p=input("")
n=len(p)
a=0
e=0
while(a<n):
	b=a+1
	r=fn(s[a])
	if b<n:
		t=fn(s[b])
	else:
		t=0
	if r<t:
		a=a+2
		r=t-r;
		e=e+r
	else:
		a=a+1
		e=e+r
if e==0:
	print("enter valid input")
else:
	print(e)
