#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number : \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b)
    {
        if (a<c)
        {
            printf("The smallest number is : %d",a);
        }
        else 
        {
            printf("The smallest numberb is : %d",c);
        }
        
    }
    else
    {
        if (b<c)
        {
            printf("The smallest number is : %d",b);
        }
        else
        {
            printf("The smallest number is : %d",c);
        }
        
    }
    return 0;
}