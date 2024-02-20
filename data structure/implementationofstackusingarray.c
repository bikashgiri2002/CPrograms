//stack implement using array
#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int top;
	int element[10];
}stack;

void init(stack *p){
	p->top=-1;
}

void push(stack *p,int x){
	p->top++;
	if(p->top == 10){
		printf("Stack is full");
		exit(0);
	}
	p->element[p->top]=x;
}

int pop(stack *p){
	if(p->top == -1){
		printf("stack is Empty");
		exit(0);
	}
	return p->element[p->top--];
}

int main(){
	int data,size,i;
	stack var;
	printf("Enter the number of data:");
	scanf("%d",&size);
	init(&var);
	for(i=0;i<size;i++){
		printf("Enter the data:");
		scanf("%d",&data);
		push(&var,data);
	}
	printf("Entered Stack is\n");
	for(i=0;i<size;i++){
		data=pop(&var);
		printf("%d\n",data);
	}
	return 0;
}
