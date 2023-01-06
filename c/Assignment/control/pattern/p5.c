#include<stdio.h>
int main()
{
	int n,i,l,j,s=1;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if (i<0)
			l=-i;
		else
			l=i;
		for (j=0;j<n-l+1;j++)
		{
			if(j!=0)
				printf("*");
			printf("%d",s);
		}
		printf("\n");
		if(i<0)
			++s;
		else
			--s;

		
	}
}
