#include<stdio.h>
void main()
{
char str[50],i,ca=0;
printf("enter a character");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'a' &&str[i]<'z')
{
ca++;
}
}
printf("%d",ca);
}
