#include<stdio.h>
int main()
{
	int i,j,z,x,y;
	char s1[20],s2[20],d[100];
	printf("enter the strings \n");
	scanf("%s%s",s1,s2);
	for(x=0;s1[x];x++);
	for(y=0;s2[y];y++);
	if(x>y)
		z=x;
	else
		z=y;
//	for(i=0,j=0;(s1[i]!='\0'||s2[i]!='\0');i++)
	for(i=0,j=0;i<z;i++)
	{
		if(i<x)
		{
		d[j]=s1[i];
		j++;
		}
		if(i<y)
		{
		d[j]=s2[i];
		j++;
		}
	}
	printf("%s\n",d);
}
