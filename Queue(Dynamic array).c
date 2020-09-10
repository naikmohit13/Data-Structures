#include<stdio.h>
#include<stdlib.h>
typedef struct Queue
{
    int front,rear;
    int *arr;
} queue;

queue* createQueue(int cap)
{
    queue *Q;

    Q=(queue*)malloc(sizeof(queue));
    Q->front=0;
    Q->rear=0;
    Q->arr=malloc(cap*sizeof(int));
    return Q;
}

void insert(queue *Q,int cap)
{
    int item;
    if(cap==Q->rear)
        printf("Queue is Full\n");
    else{
        printf("Enter the item to insert\n");
        scanf("%d",&item);
        Q->arr[Q->rear]=item;
        Q->rear++;
        }
}

int delete(queue *Q)
{
    int item;
    if(Q->front==Q->rear)
    {
        printf("Queue is Empty\n");
        return 0;
    }
    else
    {
        item=Q->arr[Q->front];
        for(int i=0;i<(Q->rear)-1;i++)
            Q->arr[i]=Q->arr[i+1];
        Q->rear--;
        return item;
    }
}

void display(queue *Q)
{
    int i;
    if(Q->front==Q->rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for(i=0;i<Q->rear;i++)
        printf("%d\n",Q->arr[i]);

    }
}
void main()
{
     int choice,del_item,cap;
     queue *Q;

     printf("Enter the capacity of Queue\n");
     scanf("%d",&cap);
     Q=createQueue(cap);
    while(1)
    {
        printf("1.Insert in Queue\n");
        printf("2.Delete from Queue\n");
        printf("3.Display Queue\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insert(Q,cap);
            break;

        case 2:
            del_item=delete(Q);
            printf("Deleted item is %d\n",del_item);
            break;

        case 3:
            display(Q);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
}
