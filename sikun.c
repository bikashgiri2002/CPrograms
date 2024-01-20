#include<stdio.h>
int main()
{
int sp,cp;
printf("enter the cost value:");
scanf("%d",&cp);
printf("enter the sell value:");
scanf("%d",&sp);
if((sp-cp)>0)
printf("profit is %d",(sp-cp));
if (cp-sp>0)
printf("loss is %d", (cp-sp));
if (cp==sp)
printf("no profit,no loss");
	
	return 0;
}
