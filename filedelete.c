#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
}s;
int main()
{
	char ch='y';
	while(ch=='y')
	{
		int x=0;
		FILE *fp1,*fp2;
		fp1=fopen("student.txt","rb");
		fp2=fopen("temp.txt","ab");
		if(fp1==NULL || fp2 == NULL)
		{
			printf("Error in Opening!");
			exit(1);
		}
		char tname[20];
		printf("Enter the you wants to delete:");
		scanf("%s",tname);
		while(fread(&s,sizeof(s),1,fp1) == 1)
		{
			if(strcmp(s.name,tname) != 0)
			{
				fwrite(&s,sizeof(s),1,fp2);
			}
			else
			{
				x=1;
			}
		}
		fclose(fp1);
		fclose(fp2);
		remove("student.txt");
		rename("temp.txt","student.txt");
		if(x==0)
		{
			printf("'%s' is not present in list\n",tname);
		}
		printf("Enter 'y' to continue 'n' to exit....");
		fflush(stdin);
		scanf("%c",&ch);	
	}
	printf("Data deleteed sucessfully");
}
