#include<stdio.h>
int main()
{
	int i,j,a[]={1,2,3,4,5,6};
	int ele = sizeof a/ sizeof a[0];
	printf("Reverse Array\n");
	for(i=ele-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}

