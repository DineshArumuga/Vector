#include<stdio.h>
int main()
{
	int num,pos,i,j;
	printf("Enter the number\n");
	scanf("%d",&num);
	for (i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
	printf("Enter the complement bit position\n");
	scanf("%d",&pos);
	printf("After the complement \n");
	num=num^(1<<pos);
	for (i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
}
