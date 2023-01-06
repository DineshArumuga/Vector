#include<stdio.h>
int main()
{
	int i,j,ele;
	int a[5];
	printf("Enter the array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	ele=sizeof a/sizeof a[0];
	for(i=0,j=ele-1;i<=j;i++,j--)
	{
		if(a[i]==a[j])
			continue;
		else 
			break;
	}
	if(i>j)
		printf("Palidrome a given array\n");
	else 
		printf("Not Palidrome \n");
}
