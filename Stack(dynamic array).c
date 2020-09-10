//STACK using dynamic array.
#include<stdio.h>
#include<stdlib.h>
typedef struct arraystack
{
    int TOP;
    int capacity;
    int *arr;
}stack;

stack* createstack(int cap)
{
    stack *s;
    s=(stack *)malloc(sizeof(stack));
    s->TOP=-1;
    s->capacity=cap;
    s->arr=malloc((s->capacity)*sizeof(int));
    return s;
}

void PUSH(stack *s,int item)
{
    if(s->TOP==s->capacity-1)
        printf("STACK full!");
    else
    {
        s->TOP++;
        s->arr[s->TOP]=item;
        printf("Item pushed\n\n");
    }
}

int POP(stack *s)
{
    int popped_item;
    if(s->TOP==-1)
        return 0;
    else
    {
        popped_item=s->arr[s->TOP];
        s->TOP--;
        return popped_item;
    }
}
void viewstack(stack *s)
{
    if(s->TOP==-1)
        printf("Empty Stack\n");
    else
    {
        for(int i=s->TOP;i>=0;i--)
            printf("%d\n",s->arr[s->TOP]);
    }
}

void main()
{
    stack *stk;
    int length,n,item,popped_item;
    printf("Enter the length of stack:\n");
    scanf("%d",&length);

    stk=createstack(length);

    while(1)
    {
        printf("1.PUSH in stack\n");
        printf("2.POP from stack\n");
        printf("3.View Stack\n");
        printf("4.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
                printf("Enter element to push\n");
                scanf("%d",&item);
                PUSH(stk,item);
                break;

        case 2:
                if(POP(stk)==0)
                    printf("Empty stack]\n");
                else
                    {
                        popped_item=POP(stk);
                        printf("%d popped\n",popped_item);
                    }
                    break;
        case 3:
                viewstack(stk);
                break;

        case 4:
                exit(0);
                break;
        default:
                printf("Invalid choice\n");
        }
    }
}
