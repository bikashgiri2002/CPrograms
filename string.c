#include<stdio.h>
#include<string.h>
int main()
{
    char pp[100];
    char ch;
    int i=0;
    while (ch != '\n')
    {
        scanf("%c",&ch);
        pp[i]=ch;
        i++;
    }
    pp[i]='\0';
    puts(pp);
    return 0;
    
}