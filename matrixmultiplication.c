#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,multi[10][10];
	printf("Enter the size of row and column of 1st matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the size of row and column of 2nd matrix\n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter the value of matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the value of matrix B\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				multi[i][j]=0;
				for(k=0;k<c1;k++)
				{
					multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("Multiplication of matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",multi[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Invelid size");
	return 0;
}
