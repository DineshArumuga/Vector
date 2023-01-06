//Write a program to print Double binary without using pointer
#include<stdio.h>
union u
{
	long long int y;
	double f;
};
int main()
{
	int i;
	union u v={5.5};
	for(i=63;i>=0;i--)
		printf("%d ",v.y>>i&1);
}
