#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number :\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{

		printf("%d ",num>>i&1);
	}printf("\n");
}

