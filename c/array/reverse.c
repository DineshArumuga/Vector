#include<stdio.h>
int main()
{
	int i,j,ele,temp;
	int a[5];
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	ele=sizeof a/sizeof a[0];
	for(i=0,j=ele-1;i<=j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("Reverse Array\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
