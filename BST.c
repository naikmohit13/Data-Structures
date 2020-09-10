#include<stdio.h>
#include<stdlib.h>
typedef struct BSTNODE
{
    int info;
    struct BSTNODE *left,*right;
} node;

node* createNode(int data)
{
    node *n;
    n=(node*)malloc(sizeof(node));
    n->info=data;
    n->left=n->right=NULL;
    return n;
}
node* insertnode(node *node,int data)
{

    if(node==NULL)
        return createNode(data);

    else if(data<node->info)
        node->left=insertnode(node->left,data);
    else
        node->right=insertnode(node->right,data);
    return node;
}

node* find(node *root,int data)
{
    if(root==NULL || root->info==data)
        return root;
    else if(data<root->info)
        return (find(root->left,data));
    else if(data>root->info)
        return (find(root->right,data));
}

node* findmin(node *root)
{
    if(root==NULL)
        return NULL;
    else if(root->left==NULL)
        return root;
    return findmin(root->left);
}

node* findmax(node *root)
{
    if(root==NULL)
        return NULL;
    else if(root->right==NULL)
        return root;
    return findmax(root->right);
}

node* delete_data(node* root,int data)
{
    node *temp;
    if(root==NULL)
        return root;
    else if(data<root->info)
        delete_data(root->left,data);
    else if(data>root->info)
        delete_data(root->right,data);
    else  //ELement found
    {
        if(root->left && root->right) //if the node having the data have left and right tree
        {
            temp=findmin(root->right);
            root->info=temp->info;
            root->right=delete_data(root->right,root->info);
        }
        else //one or none child
        {
            temp=root;
            if(root->left==NULL)
                root=root->right;
            if(root->right==NULL)
                root=root->left;
            free(temp);
        }
    }
return root;
}

void inOrder(node *root)
{
    if(root)
    {
        inOrder(root->left);
        printf("%d\t",root->info);
        inOrder(root->right);
    }
}

void main()
{
    node *root=NULL;
    int choice,data;
    node *t;
    while(1)
    {
        printf("\n1.Find in BST\n");
        printf("2.Insert in BST\n");
        printf("3.Delete from BST\n");
        printf("4.Find minimum in BST\n");
        printf("5.Find maximum in BST\n");
        printf("6.Display Tree\n");
        printf("7.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                printf("Enter element to search\n");
                scanf("%d",&data);
                t=find(root,data);
                printf("Element found in node having address %d\n",t);
                break;
        case 2:
                printf("Enter element to insert\n");
                scanf("%d",&data);
                root=insertnode(root,data);
                break;
        case 3:
                printf("Enter element to delete\n");
                scanf("%d",&data);
                root=delete_data(root,data);
                break;

        case 4:
                printf("%d is min value is BST",findmin(root));
                break;

        case 5:
                printf("%d is max value is BST",findmax(root));
                break;
        case 6:
                if(root)
                    inOrder(root);
                else
                    printf("No data in tree\n");
                break;
        case 7:
                exit(0);
                break;
        default:
                printf("INVALID CHOICE\n");
                break;
        }
    }

}
