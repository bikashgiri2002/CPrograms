#include <stdio.h>
int main()
{
    FILE *vow;
    char v[50];
    char u[50];
    int count = 0,con=0;
    vow = fopen("text.txt", "r");
    fgets(v,50,vow);
    printf("%s",v);
    for(int i=0;v[i] !='\0';i++)
    {
        char ch=v[i];
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
        {
            count++;
        }
        else if (ch==' ')
        {
            continue;
        }
        else
        con++;
        
    }
    fclose(vow);
    vow = fopen("text.txt", "a");
    fprintf(vow, "\n%d", count);
    fprintf(vow, "\n%d", con);
    fclose(vow);
    return 0;
}