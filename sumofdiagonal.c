#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("Enter the row and column\n");
	scanf("%d%d",&r,&c);
	if(r==c)
	{
		printf("Enter the value of matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		int sum=0;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j || i+j==r-1)
				{
					sum=sum+a[i][j];
				}
			}
		}
		printf("The sum of diagonal elements:%d",sum);
	}
	else
	printf("!error (only square matrix have diagon)");
	return 0;
}
