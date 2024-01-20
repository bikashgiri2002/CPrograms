#include<stdio.h>
#include<math.h>
float squreroot(int n)
{
    float p=pow(2,0.5*log2(n));
    return p;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    float p=squreroot(n);
    printf("squareroot of %d is %.2f",n,p);
    return 0;
}
