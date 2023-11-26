#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number(1-100):\n");
    scanf("%d",&n);
    if (1<=n && n<=100)
    {
        if (n%2!=0)
        {
            printf("Weird");
        }
        else if (n%2==0 && (6<=n && n<=20))
        {
            printf("weird");
        }
        else if (n%2==0 && (2<=n && n<=5))
        {
            printf("Not weird");
        }
        else if (n%2==0 && 20<n)
        {
            printf("Not weird");
        }
        
        
    }
    else{
        printf("not velid input");
    }
    return 0;
}