#include<stdio.h>
int main()
{
	int i,num,op,pos,num1,num2;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
	printf("1.Left a bit 2.Right a bit\n");
	printf("Select the operation\n");
	scanf("%d",&op);
	printf("Enter the rotate a bit\n");
	scanf("%d",&pos);
	switch (op)
	{
		case 1:
			num1=num<<31-pos+1;
			num2=num>>pos;
			num=num1|num2;
			break;
		case 2:
			num1=num>>31-pos;
			num2=num<<pos+1;
			num=num1|num2;
			break;
	}
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
}
