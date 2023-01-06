#include<stdio.h>
int main()
{
	int i,x=0,y=1,z;
	for (i=0;i<=50;i++)
	{
		printf("%d ",x);
		z=x+y;x=y;y=z;
	}
	printf("\n");
}
