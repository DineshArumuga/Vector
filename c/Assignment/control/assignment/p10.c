#include<stdio.h>
int main()
{
	char op;
	int x,y,z;
	printf("Enter the X and Y number \n");
	scanf("%d%d",&x,&y);
abc:
	printf("Enter the operator + - * / %%");
	scanf(" %c",&op);
	switch (op)
	{
		case('+'):z=x+y; break;
		case('-'):z=x-y; break;
		case('*'):z=x*y; break;
		case('/'):z=x/y; break;
		case('%'):z=x%y; break;
		default  :printf("Invalid operators");
			goto abc;		  
	}
printf("%d = %d %c %d",z,x,op,y);
}
