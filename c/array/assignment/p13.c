#include<stdio.h>
int main()
{
	int ele,i,big,a[]={1,10,20,22,36,37,90,99,87,66,83};
	ele=sizeof a/sizeof a[0];
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	big=a[0];
	for (i=1;i<ele;i++)
	{
		if(big<a[i])
			big=a[i];
	}
	printf("big = %d\n ",big);
}
