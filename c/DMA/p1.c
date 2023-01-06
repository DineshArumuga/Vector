#include<stdio.h>
#include<stdlib.h>
int x=1;
float a;
int main(int argc,char **argv)
{
	a=atof(argv[2]);	
//	scanf("%d",&x);
	x=atoi(argv[1]);
	printf("%d\n%f\n",x,a);
}
