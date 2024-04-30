#include <stdio.h>
#include <stdlib.h>
int front = -1;
int rear = -1;
int arr[10];
void insertion()
{
    int item;
    if(rear == 9){
        printf("over flow");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    printf("Enter the data :");
    scanf("%d",&item);
    arr[rear]=item;
}
void delete()
{
    if(front==-1 || front>rear){
        printf("under flow");
        return;
    }
    if (front == rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    printf("\value deleted");
}
void display()
{
    int p;
    if (rear==-1)
    {
        printf("Empty queue");
    }
    else
    {
        printf("datas are\n");
        for(int i=front;i<=rear;i++){
            printf("%d, ",arr[i]);
        }
    }
}
int main()
{
    while (1)
    {
        int choose;
        
        printf("*******MAIN MANU*******\n");
        printf("\n-------------------------------\n");
        printf("1.insert data\n2.delete data\n3.display data\n4.exit\n\nEnter your choose: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            insertion();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("wrong choose");
            break;
        }
    }
}