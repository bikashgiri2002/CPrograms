#include<stdio.h>
int main ()
{
    int week ;
    printf("Enter the number (0-7):\n");
    scanf("%d",&week);
    switch (week)
    {
    case 1: printf("sunday");
        break;
    case 2: printf("monday");
    break;
    case 3: printf("Thusday");
    break;
    case 4: printf("Wednesday");
    break;
    case 5:printf("Thursday");
    break;
    case 6: printf("Friday");
    break;
    case 7: printf("Suterday");
    break;
    default: printf("Invelid input");
        break;
    }
    return 0;
}