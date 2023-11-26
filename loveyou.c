#include<stdio.h>
int main()
{
int i;
int j;
for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
  {
      if(i==1||i==5)
      {
      printf("* ");
      }
      else if(j==3)
      {
          printf("  *");
      }
      else
      {
          printf(" ");
      }

  }
   printf("\n");
 }
 printf("\n");
 for(i=1;i<=5;i++)
 {
     for(j=1;j<=5;j++)
     {
         if(j==1)
            printf("* ");
         else if(i==5)
            printf("* ");
         else
            printf(" ");
     }
     printf("\n");
 }
 printf("\n");
 for(i=1;i<=5;i++)
 {
     for(j=1;j<=5;j++)
     {
         if(j==1)
            printf("* ");
         else if(i==5)
            printf("* ");
            else if(j==5)
            printf("   *");
         else
            printf(" ");
     }
     printf("\n");
 }
return 0;
}
