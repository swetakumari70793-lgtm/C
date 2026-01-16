#include<stdio.h>
#include<stdlib.h>
struct list
{
    int info;
    struct list *link;
} *start ;
void create();
void traverse();

int main()
{
    int choice;
    start->link =NULL;
    while(1)
    {
        printf("\n Link list operation\n");
        printf("\n 1. create list");
        printf("\n 2. Traverse list");
        printf("\n 3.Exit Program");
        printf("\n------------------------------ ");
        printf("\n Enter your choice(1-3) ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            create();
            break;
            case 2:
            traverse();
            break;
            case 3:
            printf("\n End of program");
            exit(0);
            default:
            printf("invalid choice");
        }
    }
}

void create()
{
    struct list *node;
    char ch ;
    node = start;
    do
    {
        node->link= (struct list*)malloc(sizeof(struct list));
        node=node->link;
        scanf("%d",& node->info);
        node->link=NULL;
        printf("Do you want to create next node(y/n)");
        scanf("%c",& ch);
    }
    while(ch=='y');
}

void traverse()
{
    struct list *node;
    node=start->link;
    if(node==NULL)
    {
        printf("\n List Empty");
        return;
    }
    printf("\n List Item \n");
    while(node)
    {
        printf("%d",node->info);
        node=node->link;
    }
}