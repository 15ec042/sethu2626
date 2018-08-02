#include<stdio.h>
void main()
{
int na,tempa,i,j,aa[20];
printf("enter the array of numbers");
scanf("%d",&na);
printf("enter the numbers");
for(i=0;i<=na;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=na;i++)
{
for(j=i+1;j<=na;j++)
{
if(aa[i]<aa[j])
{
temp=a[i];
aa[i]=aa[j];
aa[j]=temp;
}
}
}
printf("%d",aa[0]);
}
