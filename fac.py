u=int(input())
facto=1
if u>0:
	for i in range(1,u+1):
		facto=facto*i
	print(facto)
else:
	print("invalid")
