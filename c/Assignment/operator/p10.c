#include<stdio.h>
int main()
{
	int num,num1;
	printf("Enter the two number\n");
	scanf("%d%d",&num,&num1);
	num^num1?puts("not equal"):puts("equal ");
}

