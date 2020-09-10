#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *prev,*next;
} node;

node *START=NULL;
void insertnode()
{
    node *n;
    n=(node *)malloc(sizeof(node));
    printf("Enter the value to store in this node\n");
    scanf("%d\n",&n->info);
    n->prev=NULL;
    n->next=NULL;

    if(START==NULL)
        START=n;
    else
    {
        n->next=START;
        START->prev=n;
        START=n;
    }
}
void deletenode()
{
    if(START==NULL)
        printf("List empty\n");
    else
    {
        node *t;
        t=START;
        START=START->next;
        START->prev=NULL;
        free(t);
    }
}
void viewlist()
{
    int num;
    printf("1.From Back\n2.From Front\n");
    scanf("%d",&num);

    switch(num)
        {
        case 1:
                if(START==NULL)
                    printf("Empty List\n");
                node *r;
                r=START;
                while(r->next!=NULL)
                {
                    printf("%d\n",r->info);
                    r=r->next;
                }
                break;
        case 2:
                if(START==NULL)
                    printf("Empty List\n");
                node *s;
                s=START;
                while(s->next!=NULL)
                    s=s->next;
                while(s->prev!=NULL)
                {
                    printf("%d\n",s->info);
                    s=s->prev;
                }
                break;
        default:
                printf("Invalid Choice");

        }
}

void create_linked_list()
{
    int a;
    printf("Enter the length of linked list: ");
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
        insertnode();
}
int choice()
{
    int k;
    printf("1.CreateLL\n");
    printf("2.Insert first node\n");
    printf("3.Delete first node\n");
    printf("4.ViewLL\n");
    printf("5.Exit\n\n");

    scanf("%d\n",&k);
    return k;
}

void main()
{
    while(1)
    {
        switch(choice())
        {
            case 1:
                create_linked_list();
                break;
            case 2:
                insertnode();
                break;
            case 3:
                deletenode();
                break;
            case 4:
                viewlist();
                break;
            case 5:
                exit(0);
                break;
        default:
                printf("Invalid Choice\n");

        }
    }



















}

