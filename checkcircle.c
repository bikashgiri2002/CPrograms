#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,p,q,r;
	printf("Enter the X and Y cordinate of ceter of the circle:\n");
	scanf("%d%d",&x,&y);
	printf("Enter the radious of the circle:");
	scanf("%d",&r);
	printf("Enter the coorinate of the point you want to check\n");
	scanf("%d%d",&p,&q);
	int a=pow((p-x),2)+pow((q-y),2);
	int b=pow(r,2);
	if(a==b)
	printf("point (%d,%d) on the circle",p,q);
	else if(a<b)
	{
		if(x==p && y==q)
		printf("point(%d,%d) is inside the circle and it is origin",p,q);
		else
		printf("point(%d,%d) is inside the circle but not origin",p,q);
	}
	else
	printf("point(%d,%d) is outside the circle",p,q);
	return 0;
}
