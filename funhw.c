#include<stdio.h>
void print();
void main()
{
	print();
}
void print()
{
	printf("HELLO WORLD");
	int i;
	i++;
	if(i==10)
	return 0;
	print();
}
