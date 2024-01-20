#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter the 5 digit Number(10000-99999):\n");
	scanf("%d",&num);
	rem=num%100;
	rem/=10;
	sum+=rem;
	rem=num%1000;
	rem/=100;
	sum+=rem;
	rem=num%10000;
	rem/=1000;
	sum+=rem;
	printf("Sum of middle 3 digit:%d",sum);
	return 0;
}
