#include<stdio.h>
int main()
{
	int i,j,a[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			printf("Even = %d\n",a[i]);
		else 
			printf("Odd = %d\n",a[i]);
	}
}
