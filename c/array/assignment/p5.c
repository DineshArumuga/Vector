#include<stdio.h>
int main()
{
	int i,temp,j,a[]={10,20,30,40,50,60,70,80,90,100};
	for (i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	for (j=9,i=0;i<j;j--,i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	printf("\n");
}
