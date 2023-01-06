#include<stdio.h>
float my_atof(char *);
int main(int argc,char **argv)
{
	float r;
	r = my_atof (argv[1]);
	printf("%f",r);
}
float my_atof(char *s)
{
	int i=0,sum=0;
	float sum1=0,f=0.1;
	if((s[i]=='+')||(s[i]=='-'))
		i=1;
	for(;s[i]!='.';i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			sum=sum*10+(s[i]-48);
		}
		else 
		{
			printf("Invalid character \n");
			return 0;
		}
	}
	for(i=i+1;s[i];i++,f=f*0.1)
	{
		if((s[i]>='0')&&(s[i]<='9'))
			sum1=sum1+(s[i]-48)*f;
		else 
			printf("Invaid character \n");
	}
	if(s[0]=='-')
		return -(sum1+sum);
	else 
		return sum+sum1;
}

