#include<stdio.h>
int main()
{
int aa,ba,ca;
scanf("%d%d%d",&aa,&ba,&ca);
if((aa>ba)&&(aa>ca))
printf("a is greater");
else if((ba>aa)&&(ba>ca))
printf("b is greater");
else
printf("c is greater");
}
