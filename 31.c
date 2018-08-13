#include <stdio.h>
#include <string.h>
 
void main()
{
    char sa[200];
    int ca=0,i;
    scanf("%[^\n]sa", sa);
    for (i = 0;sa[i] != '\0';i++)
    {
        if (sa[i] == ' ')
            ca++;    
    }
    printf("%d\n", ca + 1);
}
