#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(n;n!=0;n/=10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	printf("rev=%d\n",rev);
}
