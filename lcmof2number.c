#include<stdio.h>
int main()
{
	int num1,num2,i=1,j=1,m1,m2;//num1=2,num2=3
	printf("Enter 2 number:\n");
	scanf("%d%d",&num1,&num2);
	m1=num1;//2
	m2=num2;//3
	while(m1!=m2)
	{
		m1=num1*i;//2,4,4,6
		m2=num2*j;//3,3,6,6
		if(m2<m1)
		{
			j++;
		}
		if(m1<m2)
		{
			i++;
		}
	}
	printf("lcm od %d and %d is %d",num1,num2,m2);
	return 0;
}
