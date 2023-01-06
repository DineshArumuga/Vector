#include<stdio.h>
int main()
{
	int i,j,a,count=1;
	for(i=2;count<=100;i++)
	{
		a=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				a++;
		}
		if(a==2)
		{
			printf("%d,",i);
			count++;
		}
	}
	
	printf("\n");
}

