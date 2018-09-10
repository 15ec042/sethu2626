import math
try:
    nA = int(input())
    cA=0
    aA=[]
    while(n%2==0):
        nA = int(nA/2)
        cA+=1
    if(cA>0):
        cA=0
        print(2,end= " ")
    for i in range(3,int(math.sqrt(nA))+1,2):
        while(nA%i==0):
            nA=int(nA/i)
            cA+=1
        if(cA>0):
            cA=0
            print(i,end= " ")
    if nA>2:
        print(n,end=" ")    
except:
    print("Invalid Input"
