#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
}s;
int main()
{
	char ch='y';
	FILE *fp;
	fp=fopen("student.txt","ab");
	if(fp==NULL)
	{
		printf("Error in Opening!");
		exit(1);
	}
	while(ch=='y')
	{
		printf("Enter name:");
		scanf("%s",&s.name);
		printf("Enter the roll:");
		scanf("%d",&s.roll);
		printf("Enter cgpa:");
		scanf("%f",&s.cgpa);
		fwrite(&s,sizeof(s),1,fp);
		printf("Enter 'y' to continue 'n' to exit....");
		fflush(stdin);
		scanf("%c",&ch);
	}
	printf("Thank You _/\\_");
	return 0;
}
