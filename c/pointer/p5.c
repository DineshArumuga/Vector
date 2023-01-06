#include<stdio.h>
int main()
{
	int x=300;
	char *p=(char*)&x;
	++p;
	*p=2;
	printf("x=%d *p=%d\n",x,*p);
}

