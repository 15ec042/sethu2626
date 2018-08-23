#include<stdio.h>
#include<conio.h>
void main()
{
int n,aa[10],count,i,j,ta[10];
clrscr();
printf("Enter the total number of elements:");
scanf("%d",&n);
printf("Enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&aa[i]);
ta[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(aa[i]==aa[j])
{
count+=1;
ta[j]=0;
}
}
if(t[i]!=0)
{
ta[i]=count;
}
}
printf("The unique elements are:");
for(i=0;i<n;i++)
{
if(ta[i]==1)
{
printf("%d",a[i]);
}
}
getch();
}
