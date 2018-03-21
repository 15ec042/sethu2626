h=str(input("Enter a A string : "));
g=list(h)
c1=len(h);
i=0;
if(c1==2):
    c=g[i];
    g[i]=g[i+1];
    g[i+1]=c;
elif(c1==4):
    c=g[i];
    g[i]=a[i+1];
    g[i+1]=c;
    g[i+2]=c;
    g[i+2]=g[i+3];
    g[i+3]=c;
if(c1%2==0):
    str1 = ''.join(map(str, a))
    print (str1)
else:
    print ("Impossible")
