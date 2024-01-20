#include<stdio.h>
int  fib(int n);
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	fib(n);
}
int fib(int n)
{
	if(n==0)//base case
	return 0;
	if(n==1)
	return 1;
	int fibn=fib(n-1)+fib(n-2);
	printf("%d th term of sequence is %d\n",n,fibn);
	return fibn;
}

