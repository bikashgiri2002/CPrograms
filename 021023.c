
#include<stdio.h>
int main()
{
	int num,n,count;
	printf("Enter any number:\n");
	scanf("%d",&num);
	for(int i=1;i<=num*10;i=i*10)
	{
	    count=0;
		n=num/i;
		if(n!=0)
		{
			count++;
		}
	}
	printf("No. of Digit : %d",count);
	return 0;
}