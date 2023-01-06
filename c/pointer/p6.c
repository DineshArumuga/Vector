#include<stdio.h>
int main()
{
	int x=10;
	short int *p= (short int *)&x;
	++p;
	*p=1;
	printf("x=%d *p=%d\n",x,*p);
}
