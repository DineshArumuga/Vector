#include<stdio.h>
int main()
{
	char s[20];
	int i,j;
	printf("Enter the strings \n");
	scanf(" %[^\n]",s);
	for(i=0;s[i]!='\0';i++);
	printf("Strings Lenght = %d \n",i);
	printf("Size of string = %ld \n",sizeof s);
}

