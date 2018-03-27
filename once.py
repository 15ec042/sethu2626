def f(l):
	l.sort(reverse=True)
	x=''
	y=0
	new=''
	for i in l:
		x+=str(i)
		y+=1
	print(x)
	y=0
	for i in range(len(x)-1,-1,-1):
		if y==3:
			y=0
			new+=','
		new+=x[i]
		y=y+1
	print(new[::-1])
	
def main():
	try:
		n=int(input())
		l=[]
		for i in range(n):
			l.append(int(input()))
		f(l)
	except:
		print('invalid')
main()
