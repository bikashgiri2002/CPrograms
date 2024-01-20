#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	if(num==0)
	{
		count=1;
	}
	else
	{
		while(num!=0){
			num/=10;
			count++;
		}
	}
	printf("number of digit is %d",count);
	return 0;
}
