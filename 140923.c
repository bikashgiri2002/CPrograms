#include<stdio.h>

int main()
{
    int a=4*3/6*2;
    printf("%d\n",a);
    int c=5*2-2*3;
    printf("%d\n",c);
    int s=5*2/2*3;
    printf("%d\n",s);
    int m=5*(2/2)*3;
    printf("%d\n",m);
    int b=5+2/2*3;
    printf("%d\n",b);
    printf("%d\n",4==4);
    printf("%d\n",3==4);
    printf("%d\n",4<=4);
    printf("%d\n",4<4);
    printf("%d\n",4!=4);
    printf("%d\n",4!=3);
    printf("%d\n",7<8 && 8>6);
    printf("%d\n",7<8 && 9<8);
    printf("%d\n",7<8 || 9<8);
    printf("%d\n",78<8 || 9<8);
    printf("%d\n",!(78<8 || 9<8));
    int k=2;
    int p=3;
    k+=p;//k=k+p
    printf("%d\n",k);
    return 0;
}