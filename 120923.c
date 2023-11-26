#include <stdio.h>
int main(){
    float principal,rate,time ;
    printf("Entre the principal amount\n");
    scanf("%f",&principal);
    printf("Entre the rate of intrest\n");
    scanf("%f",&rate);
    printf("Entre the time\n");
    scanf("%f",&time);
    printf("Intrest amount is : %f",principal*rate*time/100);
    return 0;
}