#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
}std;
int main()
{
	std *s;
	int n,i;
	printf("Enter the number of Student:");
	scanf("%d",&n);
	s=(std*)calloc(n,sizeof(std));
    for(i=0;i<n;i++)
    {
    	printf("Enter Roll_no:");
    	scanf("%d",&(s+i)->roll);
    	printf("Enter Name:");
//    	scanf("%s",(s+i)->name);
		fflush(stdin);
		gets((s+i)->name);
	}
	int f,l;
	printf("Enter the number of new admission:");
	scanf("%d",&f);
	l=n+f;
	s=(std*)realloc(s,l*sizeof(std));
	printf("Enter the details of new Students\n");
	for(i=n;i<l;i++)
    {
    	printf("Enter Roll_no:");
    	scanf("%d",&(s+i)->roll);
    	printf("Enter Name:");
//    	scanf("%s",(s+i)->name);
		fflush(stdin);
		gets((s+i)->name);
	}
	printf("**********************\n");
	printf("Students Details Are\n");
	printf("Name\t\tRoll_No\n");
	printf("**********************\n");
	for(i=0;i<l;i++)
	{
		printf("%s\t\t%d\n",(s+i)->name,(s+i)->roll);
	}
	return 0;
}
