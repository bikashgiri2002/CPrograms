#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	system("cls");
	for(i=0; i<=n; i++){
		sum=sum+i;
	}
	printf("Sum of %d number is %d",n,sum);
	return 0;
}
