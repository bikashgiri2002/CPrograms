#include<stdio.h>
#include<math.h>
void main ()
{
	int num,n,count=0,rem,sum=0,i;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	if(n==0)
	{count=1;
	}else{while(n!=0)
		{n/=10;
		count++;}
	}
	printf("%d\n",count);
	n=num;
	for(i=1;i<=count;i++)
	{rem=n%10;
	rem=pow(rem,count);
	sum+=rem;
	n/=10;
	}
	printf("%d\n",sum);
	if(sum==num){
		printf("%d is an armstrong number.",num);
	}else{
		printf("%d is not an armstrong number",num);
	}
}
