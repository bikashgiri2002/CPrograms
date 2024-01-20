#include<stdio.h>
struct std
{
	char name[50];
    int	roll;
    char sub[5][10];
	float mark[50];

}s1[2];
void main()
{
	int i,j;
	float avg[2];
	for(i=0;i<2;i++)
	{
		printf("-------------------------------\n");
		printf("Enter name of student(%d):",i+1);
		fflush(stdin);
		gets((s1+i)->name);
		printf("Enter roll_no:");
		scanf("%d",&(s1+i)->roll);
		printf("Enter marks of 5 subjects\n");
		for(j=0;j<5;j++)
		{
			printf("Enter the name of subject(%d):",j+1);
			scanf("%s",&s1[i].sub[j]);
			printf("Enter mark:");
			scanf("%f",&s1[i].mark[j]);
		}	
	}	
	for(i=0;i<2;i++)
	{
		float sum=0;
		for(j=0;j<5;j++)
		{
			sum=sum+s1[i].mark[j];
			avg[i]=sum/5;
		}
	}
	for(i=0;i<2;i++)
	{
		printf("************************************************\n");
		printf("The name is %s\n",s1[i].name);
		printf("the rollno is %d\n",s1[i].roll);
		printf("Marks Are:\n");
		for(j=0;j<5;j++)
		{
			printf("%s:%.2f\n",s1[i].sub[j],s1[i].mark[j]);
		}
		printf("Avg. of mark:%.2f\n",avg[i]);
	}
	
}
