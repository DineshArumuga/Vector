#include<stdio.h>
int main()
{
	int i,j,ele,temp,a[]={20,10,40,50,30,70,60};
	ele = sizeof a/ sizeof a[0];
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (i=0;i<ele-1;i++)
	{
		for (j=i+1;j<ele;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}


