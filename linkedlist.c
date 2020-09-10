
#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *start=NULL;

struct node* createnode()
{
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 return(n);
}

void insertnode()
{
    struct node *temp,*t;

    temp=createnode();
    printf("enter character");
    scanf("%c",&temp->info);
    temp->next=NULL;

    if(start=NULL)
        temp=start;
    else
    {
       t=start;
       while(t->next!=NULL)
       t=t->next;
    }
}
void createLL(int k)
{
    int i;
    struct node *q;

    for(i=0;i<k;i++)
    {
        insertnode();
    }

}
void displayLL(struct node *head)
{
   struct node *p=head;

    while(p !=NULL)
    {
        printf("%d->",& p->info);
        p=p->next;
    }
}
void main()
{
    int m;
    struct node *head;
    printf("Enter the no. of nodes\n");
    scanf("&d",&m);
    createLL(m);
    displayLL(head);

}



