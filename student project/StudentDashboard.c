#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//structure
struct student{
	char name[30];
	int roll;
	float cgpa;
}s;
//add function
void add(){
	char c='y';
	FILE *fp;
	fp=fopen("student.txt","a");
	if(fp == NULL){
		printf("!error in opening");
		return ;
	}
	while(c == 'y'){
		printf("Enter Name: ");
		fflush(stdin);
		scanf("%s",s.name);
		printf("Enter roll_No: ");
		scanf("%d",&s.roll);
		printf("Enter CGPA: ");
		scanf("%f",&s.cgpa);
		fwrite(&s,sizeof(s),1,fp);
		printf("\n\nEnter 'y' to add more :");
		fflush(stdin);
		scanf("%c",&c);
	}
	fclose(fp);
	printf("\nDetails Add Sucessfully");
}
//see all data function
void see(){
	FILE *fp;
	fp=fopen("Student.txt","r");
	if(fp == NULL){
		printf("!error in opening");
		return ;
	}
	while(fread(&s,sizeof(s),1,fp) == 1){
		printf("Student Name : %s\n",s.name);
		printf("Roll_No : %d\n",s.roll);
		printf("CGPA : %f\n",s.cgpa);
	}
	fclose(fp);
}
//search by name function
void search(){
	char c='y';
	while(c == 'y'){
		char tname[30];
		int x=0;
		printf("\n\nEnter the name: ");
		fflush(stdin);
		scanf("%s",tname);
		FILE *fp;
		fp=fopen("student.txt","r");
		if(fp == NULL){
			printf("!error in opening");
			return ;
		}
		while(fread(&s,sizeof(s),1,fp) == 1){
			if(strcmp(s.name,tname) == 0){
				printf("Student Name : %s\n",s.name);
				printf("Roll_No : %d\n",s.roll);
				printf("CGPA : %f\n",s.cgpa);
				x=1;
			}
		}
		if(x==0){
			printf("\n%s name not in list\n",tname);	
		}
		fclose(fp);
		printf("\n\nEnter 'y' to search more :");
			fflush(stdin);
			scanf("%c",&c);
	}
}
//update details function
void update(){
	char tname[30];
	int x=0;
	printf("Enter the name : ");
	fflush(stdin);
	scanf("%s",tname);
	FILE *fp,*fp1;
	fp=fopen("student.txt","r");
	fp1=fopen("temp.txt","a");
	if(fp == NULL || fp1 == NULL){
		printf("!error in opening");
		return ;
	}
	while(fread((&s),sizeof(s),1,fp) == 1){
		if(strcmp(s.name,tname) != 0){
			fwrite(&s,sizeof(s),1,fp1);
		}
		else
		x=1;
	}
	if(x==1){
		char c='y';
		while(c == 'y'){
			printf("Enter Name: ");
			fflush(stdin);
			scanf("%s",s.name);
			printf("Enter roll_No: ");
			scanf("%d",&s.roll);
			printf("Enter CGPA: ");
			scanf("%f",&s.cgpa);
			fwrite(&s,sizeof(s),1,fp1);
			printf("\n\nEnter 'y' to add more :");
			fflush(stdin);
			scanf("%c",&c);
		}	
	}
	else
	printf("%s name not in list",tname);
	fclose(fp);
	fclose(fp1);
	remove("student.txt");
	rename("temp.txt","student.txt");
	printf("\nDetails Updated Sucessfully");
}
//remove details function
void removestudent(){
	FILE *fp,*fp1;
	fp=fopen("student.txt","r");
	fp1=fopen("temp.txt","a");
	if(fp == NULL || fp1 == NULL){
		printf("!error in opening");
		return ;
	}
	char c = 'y';
	while(c == 'y'){
		char tname[30];
		int x=0;
		printf("Enter the name : ");
		fflush(stdin);
		scanf("%s",tname);
		while(fread((&s),sizeof(s),1,fp) == 1){
			if(strcmp(s.name,tname) != 0){
				fwrite(&s,sizeof(s),1,fp1);
			}
			else
			x=1;
		}
		if(x==0){
			printf("%s name not in list",tname);	
		}
		fclose(fp);
		fclose(fp1);
		remove("student.txt");
		rename("temp.txt","student.txt");
		printf("\n\nEnter 'y' to add more :");
		fflush(stdin);
		scanf("%c",&c);	
	}
	printf("\nStudent Remove Sucessfully");	
}
//start main function
int main(){
	int choose;
	char c;
	dashboard:{
	system("cls");
	printf("**** WELCOME TO STUDENT DASHBOARD ****\n\n");
	printf("1.Add New Student\n");
	printf("2.See All Student Details\n");
	printf("3.See Student Details By Name\n");
	printf("4.Update Student Details\n");
	printf("5.Remove A Student");
	printf("\n\nEnter your choose:");
	scanf("%d",&choose);
	}
	switch(choose){
		case 1:
			system("cls");
			add();
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
		case 2:
			system("cls");
			printf("**** ALL STUDENTS ****\n\n");
			see();
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
		case 3:
			system("cls");
			printf("**** SEARCH BY NAME ****\n");
			search();
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
		case 4:
			system("cls");
			printf("**** UPDATE DETAILS ****\n\n");
			update();
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
		case 5:
			system("cls");
			printf("**** REMOVE STUDENT ****\n\n");
			removestudent();
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
		case 6:
			system("cls");
			printf("!invelid choose");
			printf("\n\npress enter  to go to dashboard.....");
			fflush(stdin);
			scanf("%c",&c);
			goto dashboard;
	}
	return 0;
}
//end main
