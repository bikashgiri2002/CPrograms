#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter the row and column:");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the Elements:");
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
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
