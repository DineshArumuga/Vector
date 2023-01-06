#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	num&(num-1)?puts("not power of 2"):puts("power of 2");
}
