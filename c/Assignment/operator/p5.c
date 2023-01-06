#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	(num-1)&num?puts("not power of 2\n"):puts("power of 2\n");
}
