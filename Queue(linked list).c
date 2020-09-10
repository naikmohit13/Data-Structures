#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
} node;

node *front=NULL,*rear=NULL;

void enqueue(int cap)
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("Enter number to insert in node\n");
    scanf("%d",&n->info);
    n->link=NULL;

    if(front==NULL && rear==NULL)
        front=rear=n;
    else
    {
        rear->link=n;
        rear=n;
    }
}

void dequeue()
{
    node *temp=front;

    if(front==NULL && rear==NULL)
        printf("Empty queue\n");
    else if(front==rear)
        front=rear=NULL;
    else
        front=front->link;

    free(temp);
    printf("Item deleted\n");
}

void displayQueue()
{
    node *temp=front;
    if(front==NULL && rear==NULL)
       {
         printf("Empty Queue\n");
       }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->info);
            temp=temp->link;
        }
    }
}

void main()
{
       int choice,cap,count=0;
       printf("Enter the capacity of the queue\n");
       scanf("%d",&cap);
    while(1)
    {
        printf("1.Insert in Queue\n");
        printf("2.Delete from Queue\n");
        printf("3.Display Queue\n");
        printf("4.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            if(cap==count)
                printf("Queue is FULL\n");
            else
            {
                enqueue(cap);
                count++;
            }
            break;

        case 2:
            dequeue();
            break;

        case 3:
            displayQueue();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
