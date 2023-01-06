#include<stdio.h>
int main()
{
	int num,pos1,pos2,x,y,i,j;
	printf("Enter the NUmber \n");
	scanf("%d",&num);
	for (i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\nReverse a Bit\n");
	for (pos1=0,pos2=31;pos1<pos2;pos1++,pos2--)
	{
		x=num>>pos1&1;
		y=num>>pos2&1;
		if(x!=y)
		{
			num=num^(1<<pos1);
			num=num^(1<<pos2);
		}
	}
	for (i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
}



