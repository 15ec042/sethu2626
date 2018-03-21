x=int(input())
y=int(input())
c=0
while True:
    x=x+1
    if x%2==0:
        d=0
    elif x>=y:
        break
    else:
        c+=1
print(c)
