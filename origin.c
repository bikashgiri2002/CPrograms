#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the X coodinates and Y coodinates respectively:\n");
	scanf("%d%d",&x,&y);
	if(x==0)
	{if(y==0)
		printf("(%d,%d)point on origin",x,y);
		else
		printf("(%d,%d) point in Y axis",x,y);
	}
	else
	{
		if(y==0)
		printf("(%d,%d) point on X axis",x,y);
		else
		printf("point (%d,%d) nither in any axis nor in origin",x,y);
	}
	return 0;
}
