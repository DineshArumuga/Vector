#include<stdio.h>
int main()
{
	int i,j;
	char s[20];
	printf("Enter the strings\n");
	scanf(" %[^\n]",s);
	for(i=0;s[i]!='\0';i++);
	for(j=0,i=i-1;j<i;j++,i--)
		if(s[i]!=s[j])
			break;
	if(j<i)
		printf("Not a Palidrome\n");
	else 
		printf("Palidrome \n");
}

