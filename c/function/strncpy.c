#include<stdio.h>
#include<string.h>
//char * my_strcpy(char *,char *,size_t n);
int main()
{
	char s[20],d[20];
	printf("Enter the source strings\n");
	scanf("%s",s);
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	strncpy(d,s,n);
	//char *p = my_strncpy(d,s,n);
	printf("s=%s d=%s \n",s,d);
}
/*
char * my_strcpy(char *d,char *s,size_t n)
{
	int i;
	for(i=0;i<n;i++)
		d[i]=s[i];
	d[i]='\0';
	return d;
}
*/
