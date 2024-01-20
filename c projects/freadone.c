#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
} s;
int main()
{
	char ch = 'y';
	while (ch == 'y')
	{
		FILE *fp = fopen("student.txt", "rb");
		if (fp == NULL)
		{
			printf("!error in opening file");
			exit(1);
		}
		int choose, x = 0;
		printf("Enter '1' for search by name\n'2' for search by roll:");
		scanf("%d", &choose);
		char tname[20];
		int troll;
		switch (choose)
		{
		case 1:
			printf("Enter the name:");
			fflush(stdin);
			gets(tname);
			while (fread(&s, sizeof(s), 1, fp) == 1)
			{
				if (strcmp(tname, s.name) == 0)
				{
					printf("Name:%s\n", s.name);
					printf("roll:%d\n", s.roll);
					printf("Cgpa:%.2f\n", s.cgpa);
					x = 1;
				}
			}
			if (x == 0)
			{
				printf("Data not found\n");
			}
			goto select;
			fclose(fp);
		case 2:
			printf("Enter the roll:");
			scanf("%d", &troll);
			while (fread(&s, sizeof(s), 1, fp) == 1)
			{
				if (troll == s.roll)
				{
					printf("Name:%s\n", s.name);
					printf("roll:%d\n", s.roll);
					printf("Cgpa:%.2f\n", s.cgpa);
					x = 1;
				}
			}
			if (x == 0)
			{
				printf("Data not found\n");
			}
			fclose(fp);
			goto select;
		default:
			printf("!Wrong choose\n");
			goto select;
		}
	select:
	{
		printf("Enter 'y' to continue 'n' to exit....");
		fflush(stdin);
		scanf("%c", &ch);
	}
	}
	printf("Thank You _/\\_");
	return 0;
}
