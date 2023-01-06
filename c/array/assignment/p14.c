#include<stdio.h>
int main()
{
	int ele,i,big1,big2;
	int a[]={99,99,99,99,99,99,99,99};
//	int a[]={99,99,19,23,24,33,87,90,99,87,80,22};
        ele=sizeof a/sizeof a[0];
	for (i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	if(a[0]<a[1])
	{
	big1=a[1];
	big2=a[0];
	}
	else if(a[0]>a[1])
	{
		big1=a[0];
		big2=a[1];
	}
	else 
	{
		big1=a[i];
		big2=0;
	}
	for (i=2;i<ele;i++)
	{
		if(a[i]>big1)
		{
			big2=big1;
			big1=a[i];
		}
		else if((a[i]>big1)&&(a[i]!=big1))
				big2=a[i];
		
	}
	printf("biggest = %d second Big = %d\n ",big1,big2);
}
