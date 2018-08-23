#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],count,i,j,t[10];
clrscr();
printf("Enter the total number of elements:");
scanf("%d",&n);
printf("Enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
t[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count+=1;
t[j]=0;
}
}
if(t[i]!=0)
{
t[i]=count;
}
}
printf("The unique elements are:");
for(i=0;i<n;i++)
{
if(t[i]==1)
{
printf("%d",a[i]);
}
}
getch();
}
