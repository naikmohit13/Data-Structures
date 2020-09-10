#include<stdio.h>
#include<stdlib.h>
#define Capacity 10

int Queue[Capacity],front=0,rear=0;

void insert(int Queue[])
{
    int item;
    if(rear==Capacity)
        printf("Queue is FUll\n");
    else
    {
        printf("Enter the item to insert\n");
        scanf("%d",&item);
        Queue[rear]=item;
        rear++;
    }
}

int delete(int Queue[])
{
    int element;
    if(front==rear)
       {
        printf("\nQueue is empty\n");
        return NULL;
       }
    else
    {
        element=Queue[front];
        for(int i=0;i<rear-1;i++)
            Queue[i]=Queue[i+1];
        rear--;
        return element;
    }
}

void display(int Queue[])
{
    if(front==rear)
        printf("Oueue is Empty\n");
    else
    {
        for(int i=0;i<rear;i++)
            printf("%d\n",Queue[i]);
    }
}

int main()
{
    int choice,del_item;
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
            insert(Queue);
            break;

        case 2:
            del_item=delete(Queue);
            printf("Deleted item is %d\n",del_item);
            break;

        case 3:
            display(Queue);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
return 0;
}


















