#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the number \n");
	scanf("%d",&n);
	
	char**p=(char**)malloc(n*sizeof(char*));
	
	for(i=0;i<n;i++)
		p[i]=(char*)malloc(20*sizeof(char));
	
	printf("Enter the %d string \n",n);
	for(i=0;i<n;i++)
		scanf("%s",p[i]);

	printf("Display the string\n");
	for(i=0;i<n;i++)
		printf("%s\n",p[i]);

	for(i=0;i<n;i++)
		free(p[i]);
}
