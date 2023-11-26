#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	printf("Enter 3 number\n");
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			for(k=1;k<=c;k++){
				printf("%d%d%d\t",i,j,k);
			}
			printf("\n");
		}
	}
	return 0;
}
