#include<stdio.h>
int main()
{
	int i,ele,pos,a[]={10,20,30,40,50,60,70,80};
	ele=sizeof a/ sizeof a[0];
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("enter the array position\n");
	scanf("%d",&pos);
	if((pos>=0)&&(pos<ele))
	{
		for(i=pos;i<ele-1;i++)
		{	
			a[i]=a[i+1];
		}
		a[ele-1]=0;
	}
	else 
	{
		printf("Invalid position\n");
		return 10;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}

