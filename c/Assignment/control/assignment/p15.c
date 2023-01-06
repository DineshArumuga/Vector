#include<stdio.h>
int main()
{
	int num,temp,rem,rev;
	for(num=1;num<1000;num++)
	{
		rev=0;
	temp=num;
	for(temp;temp!=0;temp/=10)
	{
		rem=temp%10;
		rev=rev*10+rem;
	}
	if(rev==num)
		printf("%d ",rev);

}
printf("\n");
}
