#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[20];
};
int main()
{
    struct student ece[10];
    ece[0].roll=123;
    ece[0].cgpa=8.6;
    strcpy(ece[0].name,"bikash");
    printf("name is %s\n",ece[0].name);
    printf("roll no is %d\n",ece[0].roll);
    printf("cgpa is %f\n",ece[0].cgpa);
    return 0;
}
