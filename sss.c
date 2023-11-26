#include <stdio.h>
int main()
{
	int n, i, j, t;
	printf("Enter the size of array:");
	scanf("%d", &n);
	int num[n];
	printf("Enter elements of array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				t=num[i];
				num[i]=num[j];
				num[j]=t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("\n %d\n", num[i]);
	}
	return 0;
}
