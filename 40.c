#include<stdio.h>
void main()
{
int na,aa,ba,c,i;
printf("enter the element");
scanf("%d",&na);
aa=0;
ba=1;
printf("%d%d",aa,ba);
for(i=1;i<=na;i++)
{
ca=aa+ba;
aa=ba;
ba=ca;
printf("%d",ca);
}
}
