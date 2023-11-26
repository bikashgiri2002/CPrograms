#include<stdio.h>
int main()
{
	int a,b=1,c=0,n,i;
	printf("Enter the term in fabonic series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
	
}
