#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i;
	printf("Enter the Number of student:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the rollNo:");
		scanf("%d",&a[i]);
	}
	printf("*************************\n");
	printf("Students Details Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
