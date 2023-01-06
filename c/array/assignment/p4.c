#include<stdio.h>
int main()
{
	int i,ele,count=0,j;
//	int a[]={10,20,30,40,50,40,30,20,10};
	int a[] = {10,20,30,40,50,60,40,30,20,10};
	ele =sizeof a/sizeof a[0];
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0,j=ele-1;i<j;i++,j--)
	{
		if(a[i]==a[j])
			count++;
	}
	if (count==(ele/2))
		printf("palidrome array");
	else 
		printf("not palidrome ");
printf("\n");	
}
