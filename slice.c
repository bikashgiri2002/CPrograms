#include<stdio.h>
void slice(char pp[] , int n ,int m);
void main(){
    char str[50];
    int n,m;
    printf("Enter the string: ");
    scanf("%s",str);
    printf("value of start and end point respectively\n");
    scanf("%d%d",&n,&m);
    slice(str , n, m);
}
void slice(char pp[] ,int n ,int m){
    int i=n;
    while (i>=n && i<=m)
    {
        printf("%c",pp[i-1]);
        i++;
    }
}
