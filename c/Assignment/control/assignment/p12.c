#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the Number \n");
	scanf("%d",&num);
	num=-(num);
	printf("Binary number \n");
	for (i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	printf("decimal =%d\n",num);
	printf("octal = %o",num);
	printf("Hexadecimal = %x",num);
	
}
