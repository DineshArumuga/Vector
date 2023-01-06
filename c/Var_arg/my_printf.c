#include<stdio.h>
#include<stdarg.h>
void my_print(char *,...);
int main()
{
	int x=10;
	char ch='A';
	float f=22.7;
	char s[20]="Hello";
	my_print("x = %d  ch = %c  f = %f  s = %s ",ch,x,f,s);
}
void my_print(char *p,...)
{
	int i;
	char a[20];
	va_list (ap);
	va_start (ap,p);
	while(*p)
	{
		if(*p=='%')
		{
			p++;
			if(*p=='c')
			{
				char c = va_arg(ap,int);
				p++;
				putchar(c);
			}
			else if(*p=='d')
			{
				int x = va_arg(ap,int);
				sprintf(a,"%d",x);
				p++;
				for(i=0;a[i];i++)
					putchar(a[i]);
			}
			else if(*p=='f')
			{
				float f = va_arg(ap,double);
				sprintf(a,"%f",f);
				p++;
				for(i=0;a[i];i++)
					putchar(a[i]);
			}
			else if(*p=='s') 
			{
				char *s= va_arg(ap,char*);
				sprintf(a,"%s",s);
				p++;
				for (i=0;a[i];i++)
					putchar(a[i]);
			}
		}
		
		else 
		{
			putchar(*p);	
			p++;
		}
	}
}
