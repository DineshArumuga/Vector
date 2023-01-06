#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	if (((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
	{	ch=ch^32;
		printf("Convect lower =%c",ch);
	}
		else
		printf("Ivalid character \n");
}
