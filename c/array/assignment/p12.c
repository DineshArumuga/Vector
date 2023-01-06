#include<stdio.h>
int main()
{
	int num,i,ele,pos,a[]={10,20,30,40,50,60,70,80,90};
	ele=sizeof a/sizeof a[0];
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the Array position\n");
	scanf("%d",&pos);
	printf("Enter the element \n");
	scanf("%d",&num);
	if((pos>0)&&(pos<ele))
	{
	for(i=ele-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
		a[pos]=num;
	}
	else 
		printf("Invalid array position\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
