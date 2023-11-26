#include<stdio.h>
int main()
{
	int pp[]={1,2,2,23,6,4,8,10};
	int i,max;
	max=pp[0];
	for(i=1;i<8;i++)
	{
		if(pp[i]>max){
			max=pp[i];
		}
	}
	printf("bigest is:%d",max);
	return 0;
}
