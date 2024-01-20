#include<stdio.h>
//#include<string.h>
int main()
{
	int i=0,count=0;
	char name[20];
	printf("Enter the name\n");
	gets(name);
	while(name[i] != '\0')
	{
		i++;
		count++;
	}
	printf("length=%d\n",count);
//	printf("Function length=%d",strlen(name));
	return 0;
}
