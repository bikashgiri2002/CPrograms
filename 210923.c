#include<stdio.h>
int main()
{
    /*for (int i = 0; i<=10; i++)
    {
        printf("%d \n", i);
    }*/
    //increment operator
    // ++i (pre increment), i++ post increment
    int i=1;
    // printf("%d\n",i++);//use then increse
    // printf("%d\n",i);
   // printf("%d\n",++i);//increase then use
    // decrement operator 
    //--i pre decrement
    //i-- post decrement
    int n;
    printf("Enter the value of n:\n");
    scanf("%d\n",&n);
    int i=0;
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}