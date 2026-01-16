# define N 10
#include<stdio.h>
#include <stdlib.h>
int stack[N];
int top=-1;
void push(int);
int pop();
void traverse();
int main()
{
    int item,delitem;
    int choice;
    while(1) //infinite time rune the while loop (1)
    {
        printf("\n__stack operation__");
        printf("\n1. push element ");
        printf("\n2. pop element ");
        printf("\n3. Traverse element ");
        printf("\nExit Program ");
        printf("\n___________________________________________");
        printf("\nEnter Your Choice(1-4)");
        scanf("%d",& choice);

        switch(choice)
        {
            case 1:
            printf("Enter item to push ");
            scanf("%d",& item);
            push(item);
            break;
            case 2:
            delitem=pop();
            printf("Deleted item = %d ",delitem);
            break;
            case 3:
            printf("Stack element ");
            traverse();
            break;
            case 4:
            printf("End of Program ");
            exit(0);
            default:
            printf("Invalid Choice ");
        }

    }
    return 0;
}
void push(int item)
{
    if(top==N-1)
    {
        printf("Stack Overflow!");
        return;
    }
    top=top+1;
    stack[top]=item;
}
int pop()
{
    int delitem;
    if(top==-1)
    {
        printf("Stack Empty!");
        return 0;
    }
    delitem=stack[top];
    top=top-1;
    return delitem;
}
void traverse()
{
    int i;
    if(top==-1)
    {
        printf("Stack Empty!\n");
        return;
    }
    for(i=top;i>=0;i--)
    {
    printf("%d\n",stack[i]);
    }
}