#include<stdio.h>
int main()
{
	int i;
	char s[20],d[20];
	printf("Enter the strings \n");
	scanf("%s",s);
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]='\0';
	printf("%s\n",d);
}
