#include<stdio.h>
int main()
{
	int a[10];
	int i,j,count,num;
	char s;
	printf("Enter the element array \n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	for (i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
abc:
	count=0;
	printf("Enter the particular array \n");
	scanf("%d",&num);
	for (i=0;i<10;i++)
	{
		if (a[i]==num)
			count++;
	}
	if(count>0)
	{
		printf("present the array\n");
		printf("%d",count);
	}
	else
		printf("Not present array\n");
	printf("\n");
	printf("Do u want repeat Y and stop N\n");
	scanf(" %c",&s);
	if(s=='y'||s=='Y')
	goto abc;
	return 0;
}
