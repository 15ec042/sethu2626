x=input("\nEnter the N number")
y=input("\nEnter the K number")
z=list(str(x))
j=b
while j>0:
    j=j-1
    del(z[j])
print(''.join(z))
