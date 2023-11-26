#include <stdio.h>
int main()
{
    // printf("hello world\n");
    FILE *fptr;
    fptr = fopen("newtest.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    printf("\n");
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
    return 0;
}