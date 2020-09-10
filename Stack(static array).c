#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10

int stack[CAPACITY],TOP=-1;

void PUSH(int stack[])
{
    int item;
    if(TOP==CAPACITY)
        printf("Stack Full\n");
    else
    {
        TOP++;
        printf("Enter item to push\n");
        scanf("%d",&item);
        stack[TOP]=item;
    }
}

int POP(int stack[])
{
    int item;
    if(TOP==-1)
        {
            printf("Stack empty\n");
        }
    else
    {
        item=stack[TOP];
        TOP--;
        return item;
    }
}

void viewstack(int stack[])
{
    if(TOP==-1)
        printf("Stack empty\n");
    else
    {
        for(int i=TOP;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}

void main()
{
    int n,popped_item;

    while(1)
    {
        printf("1.PUSH in stack\n");
        printf("2.POP from stack\n");
        printf("3.Display stack\n");
        printf("4.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
                PUSH(stack);
                break;

        case 2:
                popped_item=POP(stack);
                printf("%d popped\n",popped_item);
                break;
        case 3:
                viewstack(stack);
                break;

        case 4:
                exit(0);
                break;
        default:
                printf("Invalid choice\n");
        }
    }
}
