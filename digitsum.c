#include<stdio.h>
int digit(int a);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("sum of digit is:%d",digit(n));
	return 0;
}
int digit(int a)
{
	int sum=0;
	while(a!=0)
	{
	int rem=a%10;
	sum+=rem;
	a/=10;
    }
    return sum;
	
}
