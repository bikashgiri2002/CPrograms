#include<stdio.h>
int main(){
	int i = 3;
	int l = i/-2;
	int k = i%-2;
	printf("%d  %d",l,k);
	int a = 015 + 0x71 + 5;
	printf("\n %d",a);
	int in =10;
	printf("\n%d %d",++in,in++);
	int m = -5 ,n;
	n =(m++, ++m);
	printf("\n %d",n);
	int x =1 ,y = 0 ,z =5;
	n = x && y || z++;
	printf("\n %d",n);
	printf("\n %d",z);
	return 0;
}
