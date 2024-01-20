#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
    int roll;
    float cgpa;
    char name[50];
};
int main()
{
	int n,i;
	printf("Enter the number of Student:");
	scanf("%d",&n);
	struct student s[n];
	printf("Enter the Student details\n");
	for(i=0;i<n;i++)
	{
		printf("Student(%d):\n",i+1);
		printf("Roll_no:");
		scanf("%d",&s[i].roll);
		printf("Name:");
//		fgets(s[i].name,50,stdin);
//		scanf("%s",(s+i)->name);
//		gets((s+i)->name);
        fflush(stdin);
		gets(s[i].name);
		//scanf("%s",s[i].name);
		printf("Cgpa:");
		scanf("%f",&s[i].cgpa);
	}
	printf("Students Details:\n");
	printf("************************\n");
	printf("Sl.No\tName\t\tRoll_No\tCGPA\n");
	printf("----------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t\t%d\t%.2f\n",i+1,s[i].name,s[i].roll,s[i].cgpa);
	}
	return 0;
}
