#include<stdio.h>
int main()
{
	char ch='A',a;
	char *p=&ch;
	printf("&ch = %p p = %p &a=%p \n",&ch,p,&a);
	printf("ch = %c p = %c \n",ch,*p);
	*p='B';
	printf("ch = %c *p = %c \n",ch,*p);
}	
