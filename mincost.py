x=list(input())
y=list(input())
z=len(x)
u=len(y)
i=0
j=0
v=[]
while d>0:
    if x[i]==y[j]:
        v.append(x[i])
    j=j+1
    i=i+1
    d=d-1
print(u-len(v))
