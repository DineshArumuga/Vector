//WRITE A PROGRAM TO FIND A PRIME NUMBER BETWEEN (0 TO 10000)
/*
#include<stdio.h>
int main()
{
	int num,i,j,count;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d, ",i);
	}
}


*/

//WRITE A PROGRAM TO FIND THE PRIME NUMBER....

#include<stdio.h>
int main()
{
	int num,i,count=0;

	printf("Enter the number \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	if(count==2)
		printf("prime number");
	else
		printf("Not prime number");
}



