#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *str;
    str = fopen("text.txt", "w");
    char a[100];
    printf("enter the name\n");
    fgets(a,100,stdin);
    fprintf(str,"%s",a);
    fclose(str);
    str=fopen("text.txt","r");
    printf("%s",fgets(a,50,str));
    fclose(str);
    return 0;
}