#include <stdio.h>
int main()
{
	int num,rem,reverse;
	reverse=0;
	printf("enter 4 digit num");
	scanf("%d",&num);
	rem=num%10;
	reverse=reverse*10+rem;
	num=num/10;
	rem=num%10;
	reverse=reverse*10+rem;
	num=num/10;
	rem=num%10;
	reverse=reverse*10+rem;
	num=num/10;
	rem=num%10;
	reverse=reverse*10+rem;
	printf("%d",reverse);
	return 0;
	
	
}
