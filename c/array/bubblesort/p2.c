#include<stdio.h>
int main()
{
	int i,j,temp,ele,a[]={50,40,30,20,10,60};
	ele = sizeof a/sizeof a[0];
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<ele-1;i++)
	{
		for (j=0;j<ele-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}	

