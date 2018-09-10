#include<stdio.h>
#include<string.h>
void main()
{
    char aa[10],ca[10];
    int ja,ia,ba[10];
    printf("Enter the string:");
    scanf("%s",&aa);
    ja=strlen(aa);
    for(ia=0;ia<ja;ia++)
    {
        ba[ia]=aa[ia];
        ba[ia]+=3;
        ca[ia]=ba[ia];
    }
    ca[ja]='\0';
    printf("The encoded string is: %s",ca);
}
