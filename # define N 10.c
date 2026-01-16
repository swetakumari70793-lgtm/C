# define N 10
int stk[N];
int top=-1;
void push(int);
int pop();
void traverse();
void main()
{
    int item,delitem;
    int choice;
    while(1) //infinite time rune the while loop (1)
    {
        printf("__stack operation__");
        printf("1. push element ");
        printf("2. pop element ");
        printf("3. Traverse element ");
        printf("Exit Program ");
        printf("____________________________________________________________");
        printf("Enter Your Choice(1-4)");
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
            case 1:
            printf("End of Program ");
            getch();
            exit(0);
            default:
            printf("Invalid Choice ");
        }

    }
}
void push(int item)
{
    if(top==N-1)
    {
        printf("Stack Overflow!");
        return 0;
    }
    top=top+1;
    stk[top]=item;
}
int pop()
{
    int delitem;
    if(top==-1)
    {
        printf("Stack Empty!");
        return 0;
    }
    delitem=stk[top];
    top=top-1;
    return delitem;
}
void traverse()
{
    int i;
    if(top==-1)
    {
        printf("Stack Empty");
        return 0;
    }
    for(i=top;i<=0;i--)
    printf("%d",stk[i]);
}