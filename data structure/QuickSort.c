#include<stdio.h>
int partition(int arr[],int si,int ei){
	int pivot=arr[ei];
        int i=si-1;
        int j;
        for (j=si;j<ei;j++){
            if(arr[j]<=pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp=arr[i];
        arr[i]=pivot;
        arr[ei]=temp;
        return i;
}
void quickSort(int arr[],int si,int ei){
	if(si<ei){
		int pivotIndex=partition(arr,si,ei);
		//left part
		quickSort(arr,si,pivotIndex-1);
		//right part
		quickSort(arr,pivotIndex+1,ei);
	}	
}
int main(){
	int n,i;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements:\n");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,n-1);
	printf("\nThe Sorted Array:\n");
	for(i=0;i<5;i++){
		printf("%d, ",arr[i]);
	}
	return 0;
}
