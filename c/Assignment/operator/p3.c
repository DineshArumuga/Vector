#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	num&1<<31?puts("-Ve\n"):puts("+Ve\n");
}
