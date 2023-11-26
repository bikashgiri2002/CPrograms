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
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(num[j]>num[j+1]){
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n",num[i]);
	}
	int key,st=0,end=n-1,x;
	printf("Enter the number you wants to search:");
	scanf("%d",&key);
	int mid=st+end/2;
	while(st<end)
	{
		if(key==num[mid]){
		printf("%d is at %d position",key,mid+1);
		break;
		}
		else if(key<num[mid]){
			end=mid+1;
		}
		else if(key>num[mid]){
			st=mid+1;
		}
		else
		 x=1;
	}
	if(x==1)
	printf("Not found!\nenter velid number");
	return 0;
}
