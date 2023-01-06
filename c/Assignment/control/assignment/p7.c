#include<stdio.h>
#include<math.h>
int main()
{
	int temp,num,rem,d,sum;
	for(num=1;num<=500;num++)
	{
		temp=num;
		d=0;
		for(temp;temp!=0;temp/=10)
			d++;
		temp=num;
		sum=0;
		for(temp;temp!=0;temp/=10)
		{
			rem=temp%10;
			sum=sum+pow(rem,d);
		}
		if(sum==num)
			printf("%d ",sum);
	}
}
