#include<stdio.h>
struct student 
{
	int roll[50];
	char name[50];
	float mark[50];
}s1[3];
int main()
{
	int i ,n;
	//printf(" the size of the structure");
	//scanf("%d",&n);
	printf("enter the student name\t rollno\t mark\t\n");
	for(i=0;i<3;i++)
	scanf("%s%d%f",s1[i].name,&s1[i].roll,&s1[i].mark);
	for(i=0;i<3;i++)
	printf("the name is %s\n",s1[i].name);
		printf("the rollno is %d\n",s1[i].roll);
	printf("the name is %f\n",s1[i].mark);


	
}
