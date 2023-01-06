#include<stdio.h>
int main()
{
	int i,j,temp;
	char s[20];
	printf("Enter the Strings \n");
	scanf("%s",s);
	for(j=0;s[j]!='\0';j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("After the reverse a string\n");
	printf("%s\n",s);
}
