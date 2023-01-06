#include<stdio.h>
int main()
{
	int num,pos,num1;
	char op;
	printf("Enter the number \n");
	scanf("%d",&num);
	printf("Enter the position \n");
	scanf("%d",&pos);
	printf("a. set a bit  b. clear a bit  c. Toggle a bit \n");
        printf("Enter the operation\n");
	scanf(" %c",&op);
	switch (op)
	{
	case 'a':
		num1=num|1<<pos;
		printf("Set a bit=%d\n",num1);
		break;
	case 'b':
		num1=num&~(1<<pos);
		printf("Clear a bit=%d\n",num1);
		break;
	case 'c':
		num1=num^(1<<pos);
		printf("Compliment a bit =%d\n",num1);
		break;
	default:
		printf("Invaild Operation\n");
		return 0;
	}
}
