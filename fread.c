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
	FILE *fp;
	fp=fopen("student.txt","rb");
	if(fp==NULL)
	{
		printf("Error in Opening!");
		exit(1);
	}
	fread(&s,sizeof(s),1,fp);
	printf("Name:%s\n",s.name);
	printf("roll:%d\n",s.roll);
	printf("Cgpa:%.2f\n",s.cgpa);
	fread(&s,sizeof(s),1,fp);
	printf("Name:%s\n",s.name);
	printf("roll:%d\n",s.roll);
	printf("Cgpa:%.2f\n",s.cgpa);
	fread(&s,sizeof(s),1,fp);
	printf("Name:%s\n",s.name);
	printf("roll:%d\n",s.roll);
	printf("Cgpa:%.2f\n",s.cgpa);
	printf("Thank You _/\\_");
	return 0;
}
