//Write the read the data character by character form the file.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
if (argc !=2)
{
	printf("Usage a.out filename\n");
	return 0;
}
char ch;
FILE *fp=fopen(argv[1],"r");
if(NULL==fp)
{
	printf("File doesn't Exciting \n");
	return 0;
}
while((ch=fgetc(fp))!=EOF)
	printf("%c",ch);
}

