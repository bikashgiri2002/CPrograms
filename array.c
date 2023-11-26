#include<stdio.h>
int main()
{
	int n,i;
	printf("enter amount of numbers you want to compare:");
	scanf("%d",&n);
	int arr[n];
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    int big=arr[0];
    int small=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
		big=arr[i];
		if(arr[i]<small)
		small=arr[i];
    }
    printf("the bigest number is %d\n",big);
    printf("the smallest number is %d",small);
	return 0;
}
