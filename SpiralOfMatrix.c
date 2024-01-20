#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the size of square matrix:");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the Elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix Is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Spiral of matrix is:");
	j=0,i=0;
	for(k=0;k<n-1;k++)
	{
		for(i=k,j=k;j<n-k;j++)
		{
			printf("%d, ",a[i][j]);
		}
		for(i=i+1,j=j-1;i<n-k;i++)
		{
			printf("%d, ",a[i][j]);
		}
		for(i=i-1,j=j-1;j>=k;j--)
		{
			printf("%d ,",a[i][j]);
		}
		for(i=i-1,j=j+1;i>k;i--)
		{
			printf("%d, ",a[i][j]);		
		}
	}
	return 0;
}
