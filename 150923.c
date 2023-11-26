#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age :\n");
    scanf("%d",&age);

    /*if (age > 18)
    {
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can drive\n");
    }
    else{
        printf("Not adult\n");
        printf("They can't vote\n");
    }*/
    if (age >=18)
    {
        printf("Adult");
    }
    else if(age <18 && age >13)
    {
    printf("teenager");
    }
    else
    {
        printf("child");
    }

    return 0;
}