#include<stdio.h>
int main()
{
	int n,rem,num;
	printf("Enter the amount:");
	scanf("%d",&num);
	printf("Enter the note you want:");
	scanf("%d",&n);
	switch(n){
		case 500:
			rem=num/500;
			printf("%d 500 notes\n",rem);
			num=num%500;
		case 100:
			rem=num/100;
			printf("%d 100 notes\n",rem);
			num=num%100;
		case 50:
			rem=num/50;
			printf("%d 50 notes\n",rem);
			num=num%50;
		case 20:
			rem=num/20;
			printf("%d 20 notes\n",rem);
			num=num%20;
		case 10:
			rem=num/10;
			printf("%d 10 notes\n",rem);
			num=num%10;
		case 1:
			rem=num/1;
			printf("%d 1 rupees coin\n",rem);
			break;
		default :
			printf("invelid note entry");
	}
	return 0;
}
