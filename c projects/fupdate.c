#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
}s,s1;
int main()
{
	char ch='y';
	while(ch=='y')
	{
		int troll,x=0;
		printf("Enter the roll_no you want to update:");
		scanf("%d",&troll);
		FILE *fp1,*fp2;
		fp1=fopen("student.txt","rb");
		fp2=fopen("temp.txt","ab");
		if(fp1==NULL || fp2 == NULL)
		{
			printf("Error in Opening!");
			exit(1);
		}
		while(fread(&s,sizeof(s),1,fp1)==1)
		{
			if(s.roll != troll)
			{	
				fwrite(&s,sizeof(s),1,fp2);
			}
			else
			{
				x=1;
			}
		}
		fclose(fp1);
		if(x==1)
		{
			printf("Enter name:");
			fflush(stdin);
			scanf("%s",&s1.name);
			printf("Enter the roll:");
			scanf("%d",&s1.roll);
			printf("Enter cgpa:");
			scanf("%f",&s1.cgpa);
			fwrite(&s1,sizeof(s1),1,fp2);
		}
		fclose(fp2);
		remove("student.txt");
		rename("temp.txt","student.txt");
		if(x==0)
		{
			printf("'%d' is not present in list\n",troll);
		}
		printf("Enter 'y' to continue 'n' to exit....");
		fflush(stdin);
		scanf("%c",&ch);
	}
	printf("Data updated sucessfully _/\\_");
	return 0;
}
