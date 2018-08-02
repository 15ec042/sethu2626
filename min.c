#include<stdio.h>
int main()
{
  int a[10],tempa;
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  tempa=a[0];
  for(i=0;i<10;i++)
  {
    if(a[0]>a[i])
    {
      tempa=a[i]);
    }
    printf("the largest number is %d",tempa);
  }
}
