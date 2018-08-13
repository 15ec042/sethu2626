#include<stdio.h>
int main()
{
int n,k,aA[10],bA[10],i,x;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&aA[i]);
}
for(int j=1;j<=k;j++)
{
x=aA[n-1];
for (i = n-1; i > 0; i--)
{
      aA[i] = aA[i-1];
   aA[0] = x;
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
