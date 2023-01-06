#include<stdio.h>
int main()
{
	int i,j,ele,count,a[]={2,3,4,6,7,89,91,103,55,77,61,63,67,34};
	ele = sizeof a/sizeof a[0];
	printf("Prime Arrays = ");
	for (i=0;i<ele;i++)
	{
		count=0;
		for (j=1;j<=a[i];j++)
		{
			if (a[i]%j==0)
				count++;
		}
		if(count==2)
			printf("%d ",a[i]);
	}
	printf("\n");
}
