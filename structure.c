#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[20];
};
int main(){
    struct student s1;
    s1.roll =123;
    s1.cgpa =5.6;
    strcpy(s1.name,"bikash");
    printf("roll no is :%d\n",s1.roll);
    printf("name is :%s\n",s1.name);
    printf("cgpa is :%f\n",s1.cgpa);

    struct student s2;
    s2.roll =124;
    s2.cgpa =6.5;
    strcpy(s2.name,"jinu");
    printf("roll no is :%d\n",s2.roll);
    printf("name is :%s\n",s2.name);
    printf("cgpa is :%f\n",s2.cgpa);

    struct student s3;
    s3.roll=125;
    s3.cgpa=8.9;
    strcpy(s3.name,"love");
    printf("name is %s\n",s3.name);
    printf("roll no is %d\n",s3.roll);
    printf("cgpa is %f\n",s3.cgpa);
    return 0;
}