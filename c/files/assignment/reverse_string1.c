#include<stdio.h>
#include<string.h>
int main()
{
	char r[30],m[30],n[30],temp;
	int len,i,j,c=0;
	FILE *fp = fopen("data.txt","r+");
	if(fp == NULL)
	{
		printf("File is does not exist\n");
		return 0;
	}
	printf("Enter the given string\n");
	scanf("%s",n);
	len = strlen(n);
	strcpy(m,n);
       	for(i=0,j=len-1;i<j;j--,i++) 
	{				           
		temp=m[i];
		m[i]=m[j];
		m[j]=temp;		
	}
	while((fscanf(fp," %s",r)) != EOF)
	{
		if(strcmp(r,n)==0)
		{
			c++;
			fseek(fp,-len,1);
			fputs(m,fp);
		}
	}
	fclose(fp);
	printf("%s --> %d \n",n,c);
}

