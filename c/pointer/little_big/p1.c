#include<stdio.h>
int main()
{
	int i,j,num,temp;
	printf("Enter the number \n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
	char *p=(char *)&num;
	char *q=p+3;
	for(i=0;i<2;i++)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;q--;
	}
	printf("Big Endian \n");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
}

