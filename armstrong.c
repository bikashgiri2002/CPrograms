#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,sum=0;
    printf("Enter a three digit number(100-999):\n");
    scanf("%d",&a);
    rem=a%10;
    sum=sum+pow(rem,3);
    printf("result 1:%d \n",sum);
    rem=(a/10)%10;
    sum=sum+pow(rem,3);
    printf("result 2 :%d \n",sum);
    rem=a/100;
    sum=sum+pow(rem,3);
   printf("result : %d\n",sum);
    if (sum == a)
    {
        printf("The number is Armstrong number");
    }
    else {
        printf("The number is not Armstrong number");
    }
    return 0;
    
}