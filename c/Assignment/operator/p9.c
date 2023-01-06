#include<stdio.h>
int main()
{
	int i,num,pos,num1,num2,j;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");


	for(i=0,j=31;j>i;j--,i++)
	{
		num1=num>>i&1;
		num2=num>>j&1;
		if(num1!=num2)
		{
			num=num^(1<<i);
			num=num^(1<<j);
		}
	}
	printf("Reverse a Bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
}
