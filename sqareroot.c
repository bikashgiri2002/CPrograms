#include<stdio.h>
#include<math.h>
int squareroot(int n);
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("the squre root is :%d",squareroot(n));
	return 0;
}
int squareroot(int n)
{
	int p=pow(n,1/2);
	return p;
}
