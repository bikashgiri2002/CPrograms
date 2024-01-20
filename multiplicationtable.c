#include<stdio.h>
int main (){
   int n,m;
   printf("Enter the number you want multiplication table :");
   scanf("%d",&n);
   for (int i = 1; i <= 10; i++)
   {
    m=n*i;
    printf("%d*%d = %d\n",n,i,m);
   }
   
    return 0;
}