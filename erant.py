g=int(input())
h=int(input())
i=0
while True:
    g=g+1
    if g%2==0:
        z=0
    elif g>=h:
        break
    else:
        i+=1
print(i)
