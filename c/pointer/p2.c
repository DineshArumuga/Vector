#include<stdio.h>
int main()
{
	float f = 22.7;
	float *p = &f;
	printf("&f = %p p = %p \n",&f,p);
	printf(" f = %f p = %f \n",f,*p);
	*p = 4.5;
	printf(" f = %f p = %f \n",f,*p);
}
