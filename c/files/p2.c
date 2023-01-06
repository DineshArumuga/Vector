//Write a program to write the character into a file 

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Usage a.out filename \n");
		return 0;
	}
	FILE *fp=fopen(argv[1],"w");
	if(fp==NULL)
	{
		printf("File is don't excist\n");
		return 0;
	}

		fputc('D',fp);
		fputc('I',fp);
		fputc('N',fp);
		fputc('E',fp);
		fputc('S',fp);
		fputc('H',fp);
}
