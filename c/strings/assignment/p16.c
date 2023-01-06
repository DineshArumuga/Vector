#include<stdio.h>
int main()
{
	int i,j,count=0,z;
	char s1[20],s2[20];
	printf("Enter the main string and sub string\n");
	scanf("%s%s",s1,s2);
	for(i=0;s1[i];i++)
	{
		if(s1[i]==s2[0])
		{
			for(j=i+1,z=1;s2[z];j++,z++)
			{
				if(s1[j]!=s2[z])
					break;
			}
			if(s2[z]=='\0')
			count++;
		}
	}
	printf("%d\n",count);
}

