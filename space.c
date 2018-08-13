#include <stdio.h>

int main(void) 
{
	char str[50];
	int ia,counta=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			counta=counta+1;
		}
	}
	printf("\nno of white spaces=%d",counta);
	return 0;
}
