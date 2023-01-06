#include<stdio.h>
int main()
{
	int i,j,ele,count,a[]={10,20,30,40,10,20,70,30,10,20};
	ele=sizeof a/sizeof a[0];
	for(i=0;i<ele;i++)
	{
		count=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(i==j)
		{
			for(j=0;j<ele;j++)
			{
				if(a[i]==a[j])
					count++;
			}
			if(count>1)
				printf("%d-->%d\n",a[i],count);
		}
	}
}


