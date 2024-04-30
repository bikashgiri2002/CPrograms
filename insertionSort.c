#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter your Size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elemants of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
		int temp=arr[i];
		j=i-1;
		while(j>=0 && temp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("sorted Array is:\n");
	for(i=0; i<n;i++){
		printf("%d, ",arr[i]);
	}
	return 0;
}
