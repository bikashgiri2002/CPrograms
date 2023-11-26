#include<stdio.h>
int main()
{
	int a[10][10],at[10][10],r,c,i,j;
	printf("Enter the size of row and column matrix:");
	scanf("%d%d",&r,&c);
	printf("Enter the values of metrix\n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
	for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				at[i][j]=a[j][i];
			}
		}
	printf("transpose of \n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	printf("   is \n");
	for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%d\t",at[i][j]);
			}
			printf("\n");
		}
	return 0;
}
