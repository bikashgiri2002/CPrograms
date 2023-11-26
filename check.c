#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if (x> 0 && x< 9)
    {
        printf("This is a digits");
    }
    else{
        printf("This is not a digits");
    }
    
    return 0;
}