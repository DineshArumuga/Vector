#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch,s[100],r[100];
	int c=0,line=0;
	FILE *fp =fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("File does not exist\n");
		return 0;
	}
	while((ch = fgetc(fp))!=EOF)
	{
		c++;
		if(ch =='\n')
		{
		if(c>line)
		{
			line = c;
			c = 0;
		}
		}
	}
	rewind(fp);
	printf("Enter the string\n");
	scanf("%s",r);
	char *buf = (char*)malloc(line+1*sizeof(char));

	while(fgets(buf,line,fp)!=NULL)
	{
		if(strstr(buf,r)!=NULL)
			printf("%s\n",buf);
	}
}
