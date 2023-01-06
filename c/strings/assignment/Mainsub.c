#include<stdio.h>
int main()
{
	int i,j,k;
	char s[100];
	char m[20];
	printf("Enter the String line \n");
	scanf("%s",s);
	printf("Enter the sub string\n");
	scanf("%s",m);
	for(i=0;s[i];i++)
	{
		if(s[i]==m[0])
		{
			for(j=i+1,k=1;m[k];j++,k++)
			{
				if(s[j]!=m[k])
					break;
			}
		if(m[k]=='\0')
			printf("sub string are present\n");
		printf("3");
	}
	}
}
