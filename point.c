#include <stdio.h>

int main(void) {
	int a[3],b[3];
	int i,flag;
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	/*for(i=0;i<3;i++)
	{
		printf("(%d, %d)\n",x[i],y[i]);
	}*/
	for(i=0;i<2;i++)
	{
		if(a[i]==a[i+1] || b[i]==b[i+1])
		{
		flag=1;	
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
