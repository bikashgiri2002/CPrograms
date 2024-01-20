#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
}std;
int main()
{
	std *s;
	printf("%d",sizeof(std));
	return 0;
}
