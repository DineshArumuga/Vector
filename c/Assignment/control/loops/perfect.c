//WRITE A PROGRAM THE FIND THE PREFECT NUMBER INA GIVEN NUMBER 
/*
#include<stdio.h>
int main()
{
	int num,i,rem,sum=0;
	printf("Enter the number \n");
	scanf("%d",&num);
	for (i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==num)
		printf("perfect number = %d ",sum);
	else 
		printf("not perfect number ");

}
*/

//WRITE A PROGRAM TO FIND THE PERFECT NUMBER BETWEEN(0 TO 10000)
#include<stdio.h>
int main()
{
	int i,j,sum;
	for (i=2;i<10000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
			printf("%d, ",i);
	}
	printf("\n");
}
	
