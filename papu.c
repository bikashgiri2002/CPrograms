#include<stdio.h>
int main()
{
   int num,rem,sum =0;
   printf("Enter any number :\n");
   scanf("%d",&num);
   int i=10;
   while (i<= num*10)
   {
    rem=num%i;
    rem=rem/(i/10);
    sum+=rem;
    i*=10;
   }
   printf("Sum of all digit is : %d",sum);
    return 0;
}
