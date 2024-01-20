#include<stdio.h>
int main()
{
   int num,rem,sum =0;
   printf("Enter any number :\n");
   scanf("%d",&num);
   while (num!=0)
   {
    rem=num%10;
    sum+=rem;
    num/=10;
   }
   printf("Sum of all digit is : %d",sum);
    return 0;
}
