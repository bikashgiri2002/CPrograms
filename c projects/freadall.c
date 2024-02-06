#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
	if(fp == NULL){
		printf("!error in opening");
		exit(1);
	}
	while(fread(&s,sizeof(s),1,fp) == 1)
	{
		printf("Name:%s\n",s.name);
		printf("roll:%d\n",s.roll);
		printf("Cgpa:%.2f\n",s.cgpa);
	}
	printf("Thank You _/\\_");
	return 0;
}
