#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,i,j,k;
	printf("Enter the value of 'x':");
	scanf("%d",&x);
	printf("Enter the value of 'n':");
	scanf("%d",&n);
	float sum=0;
	for(i=1;i<=n;i++)
	{
		int fac=1;
		for(j=1;j<=i;j++)
		{
			fac*=j;
		}
		sum=sum+pow(x,i)/fac;
	}
	printf("ans = %0.2f",sum);
	return 0;
}
