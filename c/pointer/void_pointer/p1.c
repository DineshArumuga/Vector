#include<stdio.h>
int main()
{
	int x;
	char ch;
	float f;
	void *p;
	printf("Enter the number,char,float\n");
	scanf("%d %c%f",&x,&ch,&f);
	p=&x;
	printf("%d\n",*(int *)p);
	p=&ch;
	printf("%c\n",*(char *)p);
	p=&f;
	printf("%f\n",*(float *)p);
}

