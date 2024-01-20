#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("biku.txt","r");
	if(fp==NULL)
	{
		printf("Error in opening file!");
		exit(1);
	}
	char c=fgetc(fp);
	printf("Character i read is '%c'\n",c);
	char s[20];
	//fseek(file,ofset,position);its return 0;
	fseek(fp,0,2);
	fgets(s,20,fp);
	puts(s);
	fclose(fp);
	return 0;
}
