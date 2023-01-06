#include<stdio.h>
int main()
{
	int i,even=0,odd=0,a[]={17,82,41,39,10,25,74,12,8,4};
	int ele = sizeof a/sizeof a[0];
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
			even++;
		else 
			odd++;
	}
	printf("Even = %d\nOdd = %d\n",even,odd);
}
