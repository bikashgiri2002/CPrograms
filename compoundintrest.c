#include<stdio.h>
#include<math.h>
int main()
{
    float principal,time, rate,a,b,c;
    printf("Enter the principal amount\n");
    scanf("%f",&principal);
    printf("Enter the rate of intrest\n");
    scanf("%f",&rate);
    printf("Enter the time\n");
    scanf("%f",&time);
    a=rate/100;
    b=1+a;
    c=pow(b,time);
    printf("Total amount is :%f",principal*c);
    return 0;
}
