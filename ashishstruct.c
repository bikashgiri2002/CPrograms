#include<stdio.h>
//#include<stdlib.h>
struct std
{
	int roll;
	char name[20];
	float mark;
}s;
void main()
{
//	struct std s;
	printf("enter the name\n");
	fflush(stdin);
	scanf("%s",s->name);
		printf("enter the rollno\n");
	scanf("%d",&s.roll);
		printf("enter the mark\n");
	scanf("%f",&s.mark);
	
	printf("the name =%s\n",s.name);
		printf("the rollno =%d",s.roll);
	printf("the mark=%f",s.mark);

}
