#include<stdio.h>
int main(){
    int n,num,count,i;
    printf("Enter the number :");
    scanf("%d",&n);
    for (num=1;num<=n;num++)
    { count=0;
        for ( i = 1;i<=num; i++)
        {
            if (num%i == 0)
            {
                count++;
            }
            
        }
        if (count==2 && num!=1)
        {
            printf("%d\n",num);
        }
        
        
    }
    return 0;
}
