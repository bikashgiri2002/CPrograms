#include<stdio.h>
#include<math.h>
void binaryToDecimal(int n){
	int temp=n;
	int rem,result=0;
	int i=0;
	while(n!=0){
		rem=n%10;
		result=result+rem*pow(2,i);
		i++;
		n=n/10;
	}
	printf("%d = %d",temp,result);
}
void decimalToBinary(int n){
	int temp=n;
	int rem,result=0;
	int i=0;
	while(n!=0){
		rem=n%2;
		result=result+rem*pow(10,i);
		i++;
		n=n/2;
	}
	printf("%d = %d",temp,result);
}
int main(){
	int c,n;
	printf("1.For binary to decimal\n2.For decimal to binary\n\nEnter the choose....");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Enter the binary number: ");
			scanf("%d",&n);
			binaryToDecimal(n);
			break;
		case 2:
			printf("Enter the decimal number: ");
			scanf("%d",&n);
			decimalToBinary(n);
			break;
		default:
			printf("!wrong choose");		
	}
	return 0;
}
