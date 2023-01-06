//Write a program to print float binary without using pointer (UNION)
#include<stdio.h>
union u
{
	float f;
	int x;

};
int main()
{
	int i;
	union u v={7.7};
	for(i=31;i>=0;i--)
		printf("%d ",v.x>>i&1);
}
