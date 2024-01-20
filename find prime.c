#include<stdio.h>
int main()
{
	int n,count;
	printf("enter the number:");
	scanf("%d",&n);
	int i,k;
	for(i=2;i<=n;i++)
	{
		count=0;
		for(k=1;k<=n;k++)
		{
			if(i%k==0)
			count++;
		}
		if(count==2)
		printf("prime numbers are\n%d\n",i);
	}
	return 0;
}
