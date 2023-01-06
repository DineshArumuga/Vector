#include<stdio.h>
int main()
{
	int num,i,rem,sum=0;
	printf("Enter the number \n");
	scanf("%d",&num);
	for (i=1;i<num;i++)
	{

		
		if(num%i==0)
		{

			sum=sum+i;
		}
	}
	if(sum==num)
		printf("prefect number\n");
	else
		printf("not perfect \n");
}

