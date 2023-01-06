#include<stdio.h>
#include<string.h>
char * my_strcpy(char *,char *);
int main()
{
	char s[20],d[20];
	printf("Enter the source strings\n");
	scanf("%s",s);
	char *p=my_strcpy(d,s);
	printf("s=%s d=%s p=%s \n",s,d,p);
}
char * my_strcpy(char *d,char *s)
{
	int i;
	for(i=0;d[i]=s[i];i++);
	return d;
}
