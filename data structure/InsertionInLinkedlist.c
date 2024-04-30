#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct link{
    int data;
    struct link *next;
}list;
void insertion(){

}
int main(){
    char ch;
    list *node, *start;
    //start of link list
    node = (list *)malloc(sizeof(list));
    if (node == NULL)
    {
        printf("Error in memory allocation");
        exit(0);
    }
    start = node;
    printf("Enter the data: ");
    scanf("%d",&node->data);
    node->next=NULL;
    printf("Enter 'y' to add more");
    fflush(stdin);
    ch = getchar();
    while (ch == 'y' || ch == 'Y')
    {
        node->next=(list *)malloc(sizeof(list));
        node=node->next;
        if (node == NULL)
        {
            printf("Error in memory allocation");
            exit(0);
        }
        printf("Enter the data: ");
        scanf("%d",&node->data);
        node->next=NULL;
        printf("Enter 'y' to add more:");
        fflush(stdin);
        ch = getchar();
    }
    //data insertion on first place
    printf("Data Insertion At First Place\n");
    list *add;
    add=(list *)malloc(sizeof(list));
    if (add == NULL)
    {
        printf("no memory allocation");
        exit(1);
    }
    add->next=start;
    printf("Enter the data: ");
    scanf("%d",&add->data);
    start=add;
    // display
    while (start != NULL)
    {
        printf("%d, ",start->data);
        start=start->next;
    }
    return 0;
}