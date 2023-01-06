#include<stdio.h>
int main()
{
	int n,i,l,s,j;
	printf("Eter the number \n");
	scanf("%d",&n);
	for (i=-n;i<=n;i++)
	{

		if (i<0)
			l=-i;
		else 
			l=i;
		for (s=0;s<n-l;s++)
			printf("  ");
		for (j=0;j<2*(n-s)+1;j++)
			printf("* ");
		printf("\n");
	}
}
