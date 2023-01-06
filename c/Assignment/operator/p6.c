#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the ch value\n");
	scanf("%c",&ch);
	ch=ch^32;
	printf("Opposite letter =%c\n",ch);
}
