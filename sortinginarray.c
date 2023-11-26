#include<stdio.h>
int main()
{
	int a[100],n,i,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the element of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(a[i]<a[k])
			{
				int temp=a[k];
				a[k]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
