#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int mark;
	char fav_char;
	char name[40];
}s1;
int main()
{
	s1.id=20;
	s1.mark=100;
	s1.fav_char='b';
    strcpy(s1.name,"bhagya");
    return 0;
}
