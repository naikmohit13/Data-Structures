#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
} node;

node *TOP=NULL;

void PUSH()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("Enter the number to push\n");
    scanf("%d",&n->info);
    n->link=TOP;
    TOP=n;
    printf("Item Pushed\n");
}

void POP()
{
    if(TOP==NULL)
        printf("Stack Empty\n");
    else
        {
            node *temp;
            temp=TOP;
            TOP=TOP->link;
            free(temp);
        }
}

void displaystack()
{
    if(TOP==NULL)
        printf("Stack empty\n");
    else
    {
        while(TOP!=NULL)
        {
            printf("%d\n",TOP->info);
            TOP=TOP->link;
        }
    }
}
 void main()
 {
   int n;

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
                PUSH();
                break;

        case 2:
                POP();
                break;
        case 3:
                displaystack();
                break;

        case 4:
                exit(0);
                break;
        default:
                printf("Invalid choice\n");
        }
    }
}
