#include<stdio.h>
int main()
{
	int num,num1;
	printf("Enter the two number\n");
	scanf("%d%d",&num,&num1);
	num=num^num1;
	num1=num1^num;
	num=num1^num;
	printf("X = %d Y=%d\n",num,num1);
}
