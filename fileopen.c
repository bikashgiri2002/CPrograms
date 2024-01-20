#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("bikash","w");
	if(fp==NULL)
	{
		printf("Error in opening file!");
		exit(1);
	}
	printf("Enter the text\n");
	while(ch!=EOF)
	{
		ch=getchar();
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}
