#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(n;n!=0;n/=10)
	{
		rem=n%10;
		sum=sum+rem;
	}
	printf("sum=%d\n",sum);
}
