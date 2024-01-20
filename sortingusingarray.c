#include<stdio.h>
int i,j,n,temp;
void bubble(int arr[])
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void selection(int arr[])
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
void print(int arr[])
{
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}
void scan(int arr[])
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int main()
{
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of arr:\n");
	scan(arr);
//	bobble(arr);
	selection(arr);
	print(arr);
	return 0;
}
