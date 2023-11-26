#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    //for even 1
    // for odd 0
    scanf("%d",&x);
    printf("%d",x % 2 == 0);
    return 0;
}