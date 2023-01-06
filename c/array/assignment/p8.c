#include<stdio.h>
int main()
{
	int i,b[5],a[5]={10,80,40,30,10};
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<5;i++)
		b[i]=a[i];
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	printf("\n");
}
