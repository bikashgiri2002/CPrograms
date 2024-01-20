#include<stdio.h>
int main()
{
	int n;
	float p;
	printf("Enter the number of days late :");
	scanf("%d",&n);
	if(n<=5)
	{
    	p=n*0.5;
	   printf("fine is : %.2f",p);
    }
	else if(n>5 && n<=10)
	{
		p=2.5+(n-5)*1;
		printf("fine is : %.2f",p);
	}
	else if(n>10 && n<=30)
	{
		p=7.5+(n-10)*5;
		printf("fine is : %.2f",p);
	}
	else
	{
		p=107.5+(n-30);
		printf("fine is : %.2f \n your membership is cancled",p);
	}
	return 0;
	
}
