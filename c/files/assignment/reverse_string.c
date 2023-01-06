#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i,j,k;
	char a[20],b[20],temp;
	if(argc!=3)
	{
		printf("Usage : ./a.out file word\n");
		return 0;
	}
	FILE *fp =fopen(argv[1],"r+");
	i=strlen(argv[2]);
	strcpy(b,argv[2]);
	for(j=0,k=i-1;j<k;k--,j++)
	{
		temp=b[j];
		b[j]=b[k];
		b[k]=temp;
	}
	while((fscanf(fp,"%s",a))!=EOF)
	{
		if((strcmp(a,argv[2]))==0)
		{
			fseek(fp,-i,SEEK_CUR);
		//	fprintf(fp,"%s",b);
			for(j=0;j<i;j++)
			{
				fputc(b[j],fp);
			}
		}
	}
	fclose(fp);
}
