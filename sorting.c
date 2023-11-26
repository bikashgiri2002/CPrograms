#include <stdio.h>
int main()
{
	int n, i, j, t;
	int num[100];
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter elements of array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("\n %d\n", num[i]);
	}
	return 0;
}