#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char *p[5];
	for(i=0;i<5;i++)
		p[i]=(char*)malloc(20*sizeof(char*));
	
	printf("Enter the 5 string\n");
	for(i=0;i<5;i++)
		scanf("%s",p[i]);
	
	printf("Display \n");
	for(i=0;i<5;i++)
		printf("%s\n",p[i]);

	for(i=0;i<5;i++)
		free(p[i]);
}



