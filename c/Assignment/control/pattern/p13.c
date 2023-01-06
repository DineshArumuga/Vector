#include<stdio.h>
int main()
{
	int n,i,j,s,j1;
	printf("Enter the number :\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i+1;j++)
			printf("%d ",j+1);
		for(s=0;s<(n*2)-(i*2)-1;s++)
			printf("  ");
		for(j1=i+1;j1>0;j1--)
		{	if(j1!=1+n)
			printf("%d ",j1);}
		printf("\n");

	}
}
