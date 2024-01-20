#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,sum=0,n,count=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	n=num;
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n!=0){
			n/=10;
			count++;
		}
	}
	n=num;
	int i=10;
   while (i<= n*10)
   {
    rem=n%i;
    rem=rem/(i/10);
    rem=pow(rem,count);
    sum+=rem;
    i*=10;
   }
   if(sum == num)
   printf("%d is an armstrong number.\n",num);
   else
   printf("%d is not an Armstrong number.\n",num);
	return 0;
}
