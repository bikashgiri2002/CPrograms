#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	if(a>c)
	printf("the largest value=%d",a);
	else
	printf("the largest value=%d",c);
    }
    else
    {
    	if(b>c)
    	printf("%d",b);
    	else
    	printf("the largest value=%d",c);
	}
    
}
