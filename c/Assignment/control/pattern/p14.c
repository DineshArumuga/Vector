#include<stdio.h>
int main()
{
	int n=6,i,j,s,j1;
	for(i=0;i<=n;i++)
	{
		for(j=65;j<=71-i;j++)
		printf("%c ",j);
		for(s=0;s<i*2-1;s++)
			printf("  ");
		for (j1=71-i;j1>=65;j1--)
		{
			if(j1!=71)
				printf("%c ",j1);
		}
	printf("\n");
	}
}
