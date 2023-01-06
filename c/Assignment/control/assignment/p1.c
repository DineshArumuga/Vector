#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter the number :\n");
	scanf("%d",&n);
	for(i=n;i!=0;i--)
	{
		f=f*i;
	}
	printf("f!=%d",f);
}
