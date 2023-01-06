#include<stdio.h>
int main()
{
	char *cp=(char*)0x1000;
	short int *sip=(short int*)0x1000;
	int *ip=(int*)0x1000;
	long int *lip=(long int*)0x1000;
	float *fp=(float*)0x1000;
	printf("size : cp=%p	 *cp=%p		\n",cp,cp+1);
	printf("size : sip=%p	 *sip=%p	\n",sip,sip+1);
	printf("size : ip=%p	 *ip=%p		\n",ip,ip+1);
	printf("size : lip=%p	 *lip=%p	\n",lip,lip+1);
	printf("size : fp=%p	 *fp=%p		\n",fp,fp+1);
}
