#include<stdio.h>
void main()
{
 int math,science,mp,sp;
 printf("Enter your mark in math:\n");
 scanf("%d",&math);
 printf("Enter your mark in science:\n");
 scanf("%d",&science);
 if(math>=30 && math<=100){
 	mp=1;	
 }
 else if(math>=0 && math<30){
 	mp=0;
 }
 else{printf("invelid entry");
 }
 if(science>=30 && science<=100){
 	sp=1;	
 }
  else if(science>=0 && science<30){
 	sp=0;
 }
 else{printf("invelid entry");
 }
 if(mp==1&&sp==1)
 {
 	printf("you get a gift of 45 rupees");
 }
 else if(mp==1||sp==1){
 	printf("you get a gift of 15 rupees");
 }
  else if(mp==0&&sp==0){
 	printf("no gifts");
 }
 
}
