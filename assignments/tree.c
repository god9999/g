#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node n;
n *root;

void binarytree(n *temp,int data)
{
    n *newnode;
    if(temp->data>data && temp->left!=NULL)
    {
        binarytree(temp->left,data);
    }
    else if(temp->data<data && temp!=NULL)
    {
        binarytree(temp->right,data);
    }
   newnode=(n*)malloc(sizeof(n));
   newnode->data=data;
   newnode->left=NULL;
   newnode->right=NULL;
   if(temp->data<data &&temp->left==NULL)
   {
       temp->left=newnode;
   }
   else if(temp->data>data &&temp->right==NULL)
   {
       temp->right=newnode;
   }
}
void preorder(n *temp)
{
    if(temp==NULL)
    return;
    printf("%d",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(n *temp)
{
    if(temp==NULL)
    return;
    postorder(temp->left);
    postorder(temp->right);
    printf("%d",temp->data);
}
void inorder(n *temp)
{
    if(temp==NULL)
    return;
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);
}
int main(void)
{
    int ch,data;
    root=(n*)malloc(sizeof(n));
    scanf("%d",&root->data);
    root->left=NULL;
    root->right=NULL;
    while(1)
    {
        printf("1.insert \n 2.postorder \n 3.preorder \n 4.inorder \n 5.termination\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                scanf("%d",&data);
                binarytree(root,data);
                break;
            }
            case 2:
            {
                postorder(root);
                break;
            }
            case 3:
            {
                preorder(root);
                break;
            }
            case 4:
            {
                inorder(root);
                break;
            }
            case 5:
            {
                exit(0);
            }
        }
    }
}
