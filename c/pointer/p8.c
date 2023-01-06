#include<stdio.h>
int main()
{
	int x=10;y=20,z;
	int *p=&x;
	printf("&x=%p &y=%p &z=%p\n",&x,&y,&z,&p);
	//z=*p++;
	//z=*p++;
	//z=(*p)++;
	//z=++(*p);
	//z=++*p++;
	z=++(*p)++;
	printf("x=%d y=%d z=%d *p=%d",x,y,z,*p);
}

