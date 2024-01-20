#include<stdio.h>
int main()
{
	int r,c,i,j,k;
	printf("Enter the size of row and column matrix:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix Is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Spiral of matrix is:");
	j=0,i=0;
	for(k=0;k<c-1;k++)
	{
		for(i=k,j=k;j<c-k;j++)
		{
			printf("%3d, ",a[i][j]);
		}
		for(i=i+1,j=j-1;i<r-k;i++)
		{
			printf("%3d, ",a[i][j]);
		}
		for(i=i-1,j=j-1;j>=k;j--)
		{
			printf("%3d ,",a[i][j]);
		}
		for(i=i-1,j=j+1;i>k;i--)
		{
			printf("%3d, ",a[i][j]);		
		}
	}
	return 0;
}
