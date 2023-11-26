#include<stdio.h>
int main()
{
	/*int mark1=97;
	int mark2=98;
	int mark3=96;*/
	float price[3];
	printf("enter the price of mango,banana and grapes:\n");
	scanf("%f%f%f",&price[0],&price[1],&price[2]);
	printf("final price of\nmango=%.2f\nbanana=%.2f\ngrapes=%.2f",price[0]+price[0]*18/100,price[1]+price[1]*18/100,price[2]+price[2]*18/100);
	return 0;
}
