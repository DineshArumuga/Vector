#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c;
	printf("Enter the Row & Colomn \n");
	scanf("%d%d",&r,&c);
	int **p=(int**)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
		p[i]=(int*)malloc(c*sizeof (int ));
	printf("Enter the elments\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("print the elments\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
		free(p[i]);
}

