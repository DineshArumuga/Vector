#include<stdio.h>
int main()
{
	float num;
	int i,j;
	printf("Enter the float \n");
	scanf("%f",&num);
	char *p=(char*)&num;
	p=p+3;
	for(i=3;i>=0;i--)
	{
	for(j=7;j>=0;j--)
		printf("%d",*p>>j&1);
	printf(" ");
	p--;
	}
	printf("\n");
}

