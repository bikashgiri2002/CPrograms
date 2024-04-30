#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct link{
    int data;
    struct link *next;
}list;
list *node,*start;
int main(){
    char ch;
    node=(list *)malloc(sizeof(list));
    if (node == NULL)
    {
        printf("no memorry allocation");
        exit(1);
    }
    start=node;
    printf("Enter the data: ");
    scanf("%d",&node->data);
    node->next=NULL;
    printf("Enter 'y' to add more: ");
    fflush(stdin);
    ch=getchar();
    while (ch == 'y' || ch == 'Y')
    {
        node->next=(list *)malloc(sizeof(list));
        node = node->next;
        if (node == NULL)
            {
                printf("no memorry allocation");
                exit(1);
            }
        printf("Enter the data: ");
        scanf("%d",&node->data);
        node->next=NULL;
        printf("Enter 'y' to add more:");
        fflush(stdin);
        ch=getchar();
    }
    while (start != NULL)
    {
        printf("%d, ",start->data);
        start=start->next;
    }
    return 0;
}