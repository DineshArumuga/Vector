#include<stdio.h>
int main()
{
	int num,i,pow,R=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the power\n");
	scanf("%d",&pow);
	for (i=1;i<=pow;i++)
		R*=num;
	printf("Power Of Number is %d\n",R);
}
