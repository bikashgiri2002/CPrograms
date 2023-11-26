#include<stdio.h>
void number(int arr[],int n);
int main()
{
	int ppp[]={1,2,3,4,5,6};
	number(ppp,6);
	return 0;
}
void number(int arr[],int n)
{
	int i;
	for(i=0; i<n ; i++)
	{
		printf("%d\t",arr[i]);
	}
}
