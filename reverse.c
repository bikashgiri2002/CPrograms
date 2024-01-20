#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf ("enter the number:");
	scanf("%d",&num);
	int i=10;
	while(i<=num*10)
	{rem=num%i;
	rem/=(i/10);
	sum=sum*10+rem;
	i*=10;
	}
	printf("%d",sum);
}
