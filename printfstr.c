/*// C program to illustrate 
// fgets() 
#include <stdio.h> 
#define MAX 50 
int main() 
{ 
	char str[MAX]; 

	// MAX Size if 50 defined 
	fgets(str, MAX, stdin); 

	printf("String is: \n"); 

	// Displaying Strings using Puts 
	puts(str); 

	return 0; 
}*/
#include<stdio.h>
int main()
{
	char a[5];
	fgets(a, 5, stdin);
	printf("string is:%s",a);
	return 0;
}

