#include<stdio.h>
int main()
{
	char a[20];
	printf("Enter the elements of string:");
	fgets(a,10,stdin);
	printf("the string is:");
	puts(a);
	return 0;
}
