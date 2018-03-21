x=int(input())
y=int(input())
z=0
while True:
    x=x+1
    if x%2==0:
        d=0
    elif x>=y:
        break
    else:
        z+=1
print(z)
