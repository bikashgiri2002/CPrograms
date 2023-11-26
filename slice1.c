#include<stdio.h>
void slice(char str[], int n, int m);
int main(){
    char str[50];
    int n,m;
    printf("Enter the string: ");
    scanf("%s",str);
    printf("value of start and end point respectively\n");
    scanf("%d%d",&n,&m);
    slice(str , n, m);
}
void slice(char str[], int n, int m){
    char newstr[100];
    int j=0;
    for (int i = n; i <= m; i++,j++)
    {
        newstr[j] = str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}