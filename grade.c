#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks(0-100) :\n");
    scanf("%d",&marks);
    if (marks<=100 && marks>=90)
    {
        printf("Grade is : A+ \n");
    }
    else if (marks < 90 && marks >= 70)
    {
        printf("Grade is : A \n");
    }
    else if (marks<70 && marks>= 30)
    {
        printf("Grade is : B \n");
    }
    else if (marks < 30 && marks >= 0)
    {
        printf("Fail \n");
    }
     else
    {
        printf("Invelid marks");
    }
   
    return 0;
}