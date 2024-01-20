#include<stdio.h>
int main()
{
	char a[100];
	int n;
	printf("Enter the size of string:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	int i=0;
	char ch;
	while(ch !='\n')
	{
		scanf("%c",&ch);
		a[i]=ch;
		i++;
	}
	a[i]='\0';
//	gets(a);
	puts(a);
	return 0;
}
