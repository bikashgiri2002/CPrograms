#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter a four digit number :");
    scanf("%d",&num);
    rem=num%10 ;
    sum=sum+rem;
    rem=num/1000;
    sum=sum+rem;
    printf("sum of 1st and 4th digits is : %d",sum);
    return 0;
}