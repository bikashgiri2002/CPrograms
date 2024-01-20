#include<stdio.h>
int fact(int);
int main()
{
	int num,res;
	printf("Enter the number :");
	scanf("%d",&num);
	res=fact(num);
	printf("factorial of %d is %d",num,res);
}
int fact(int num)
{
	if(num==1||num==0)
	return 1;
	int f=num*fact(num-1);
	return f;
}
