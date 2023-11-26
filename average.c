#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sum;
    printf("Enter the number\n");
    scanf("%f%f%f", &a,&b,&c);
    sum = a+b+c ;
    printf("The average is : %f",sum/3);
    return 0;

}