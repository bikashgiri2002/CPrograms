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
	int p;
	for(i=1;i<=n;i++)
	{
		int fac=1;
		for(j=1;j<=i;j++)
		{
			fac*=j;
		}
		printf("%d\n",fac);
		p=pow(x,i);
		printf("pow=%d\n",p);
		float r=p/fac;
		printf("r=%f\n",r);
		sum=sum+r;
		printf("ans = %f\n",sum);
	}
	printf("ans = %f",sum);
	return 0;
}
