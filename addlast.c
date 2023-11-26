#include<stdio.h>
int main()
{
	int xx[]={0,2,3,4,5};
	int *pp=&xx[0];
	printf("%p",pp);
	printf("\t%d",*(pp+4));
	*(pp+4)=6;
	printf("\t%d",*(pp+4));
	return 0;
}
