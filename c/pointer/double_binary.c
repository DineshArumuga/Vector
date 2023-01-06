#include<stdio.h>
int main()
{
	int i,j;
	double num;
	printf("Enter the double number\n");
	scanf("%lf",&num);
	char *p= (char *)&num;
	p=p+7;
	for(i=7;i>=0;i--)
	{
		for(j=7;j>=0;j--)
			printf("%d",*p>>j&1);
		p--;
		printf(" ");
	}
}

