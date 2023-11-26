#include<stdio.h>
struct student
{
    int roll;
    float cgpa;
    char name[10];
};
int main()
{
    struct student s1 ={123,9.6,"bikash"};
    printf("roll is %d\n",s1.roll);
    printf("roll is %f\n",s1.cgpa);
    printf("roll is %s\n",s1.name);
    struct student s2 ={525,125,"jinu"};
    printf("roll is %d\n",s2.roll);
    printf("roll is %f\n",s2.cgpa);
    printf("roll is %s\n",s2.name);
    return 0;
}
