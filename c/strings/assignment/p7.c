#include<stdio.h>
int main()
{
	int i,j;
	char s[20];
	printf("Enter the Strings \n");
	scanf(" %[^\n]",s);
	for(i=0;s[i]!=0;i++);
	for(j=i-1;j>=0;j--)
		printf("%c",s[j]);
	printf("\n");
}
