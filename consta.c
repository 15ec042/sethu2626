#include<stdio.h>
void main()
{
int aa[10],ia,ja,tempa,na;
printf("enter the number");
scanf("%d",&na);
printf("enter the number");
for(ia=0;ia<n;ia++)
{
scanf("%d",&aa[ia]);
}
for(ia=0;ia<n;ia++)
{
for(ja=ia+1;ja<na;ja++)
{
if(aa[ia]>aa[ja])
{
tempa=aa[ia];
aa[ia]=a[ja];
aa[ja]=tempa;
}
}
}
for(ia=0;ia<na;ia++)
{
printf("%d",aa[ia]);
}
}
