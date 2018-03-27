 x=input()
    y=[]
    z=0
    for i in range(0,x):
        t=input()
        y.append(t)
    for i in range(0,len(y)):
        for j in range(0,len(y)):
            if(y[i]==y[j]):
                z=z+1
        if(z==1):
            print(y[i])
z=0
