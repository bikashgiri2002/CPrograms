#include<stdio.h>
#include<string.h>
void salt(char sring[]);
int main()
{
    char pp[100];
    printf("Enter your password(no sapce):");
    scanf("%s",pp);
    salt(pp);
    return 0;
}
void salt(char string[])
{
    char qq[]="123";
    char xx[103];
    strcpy(xx , string);
    strcat(xx,qq);
    puts(xx);
}