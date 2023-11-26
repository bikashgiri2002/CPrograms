#include<stdio.h>
int main()
{
	int a[10][10];
	int r,c,i,j,k,l,temp;
	printf("Enter the row and column\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
			{
				for(l=0;l<c;l++)
				{
				   if(a[i][j]<a[k][l])
			    {
				  temp=a[k][l];
				   a[k][l]=a[i][j];
				   a[i][j]=temp;
			    }
				}
			   
			}
		}
	}
	printf("sorted matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
