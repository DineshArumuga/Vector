#include<stdio.h>
int main()
{
	short unsigned int num,temp,num1;
	int i,j;
	printf("Enter the Hexidecimal number\n");
	scanf("%hx",&num);
	char *p=(char *)&num;
	p=p+1;
	for (i=0;i<2;i++)
	{	
		num1 = *p;
		p--;

	}
	for(i=0;i<2;i++)
	printf("%hx",num1);
}
