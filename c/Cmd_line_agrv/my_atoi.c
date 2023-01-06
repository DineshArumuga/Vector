#include<stdio.h>
int my_atoi(char *);
int main(int agrc,char **argv)
{
	int r;
	r=my_atoi(argv[1]);
	printf("%d\n",r);
}
int my_atoi(char *s)
{
	int i=0,sum=0;
	if((s[0]=='+')||(s[0]=='-'))
		i=1;
	for(;s[i];i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			sum=sum*10+(s[i]-48);
		}
	}
	if(s[0]=='-')
		return (-sum);
	else 
		return sum;
}

