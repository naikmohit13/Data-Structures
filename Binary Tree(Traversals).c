#include<stdio.h>

typedef struct BinaryTreeNode
{
    int info;
    struct BinaryTreeNode *left=*right=NULL;
} node;

typedef struct Queue
{
    int front,rear;
    int *arr;
} queue;

node *root=NULL;
queue* createQueue(capacity)
{
    queue *Q;

    Q=(queue*)malloc(sizeof(queue));
    Q->front=0;
    Q->rear=0;
    Q->arr=malloc(10*sizeof(int));
    return Q;
}

void preOrder(node *root)
{
    if(root)
    {
        printf("%d\t",root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
    else
        printf("No data in the Tree\n");
}

void inOrder(node *root)
{
    if(root)
    {
        inOrder(root->left);
        printf("%d\t",root->info);
        inOrder(root->right);
    }
    else
        printf("No data in the Tree\n");
}

void postOrder(node *root)
{
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n",root->info);
    }
    else
        printf("No data in the Tree\n");
}

void levelOrder(node *root)
{
    node *temp;
    queue *Q=createQueue();
    if(root)
        return;

}
void main( )
