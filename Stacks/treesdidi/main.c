//operations preorder , inorder , postorder tree traversal
//insert node data in BST
//find minimum and maximum node data in given tree
#include <stdio.h>
#include <stdlib.h>
struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
};
struct BSTnode *root = NULL;
void insertNodeBST()
{
    struct BSTnode *temp = (struct BSTnode*)malloc(sizeof(struct BSTnode));
    printf("Enter Node Data\n");
    scanf("%d",&temp -> data);
    temp -> left = NULL;
    temp -> right = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct BSTnode *p = root, *q;
        while (p != NULL)
        {
            q = p;
            if (temp -> data > p -> data)
            {
                p = p -> right;
                if ( p == NULL)
                {
                    q -> right = temp;
                }
            }
            else
            {
                p = p -> left;
                if (p == NULL)
                {
                    q -> left = temp;
                }
            }
        }
    }
}
void PreOrder(struct BSTnode *root)
{
    struct BSTnode *temp = root;
    if (root == NULL)
    {
        return ;
    }
    else
    {
        printf("%d ",temp -> data);
        
        PreOrder(root -> left);
        
        PreOrder(root -> right);
    }
}
void InOrder(struct BSTnode *root)
{
    struct BSTnode *temp = root;
    if (root == NULL)
    {
        return ;
    }
    else
    {
        InOrder(root -> left);
        
        printf("%d ",temp -> data);
        
        InOrder(root -> right);
    }
}
void PostOrder(struct BSTnode *root)
{
    struct BSTnode *temp = root;
    if (root == NULL)
    {
        return ;
    }
    else
    {
        PostOrder(root -> left);
        
        PostOrder(root -> right);
        
        printf("%d ",temp -> data);
    }
}
struct BSTnode* findMin()
{
    struct BSTnode *temp = root;
    while (temp -> left)
    {
        temp = temp -> left;
    }
    printf("Minimum node data in this BST is %d\n",temp -> data);
    return temp;
}
struct BSTnode* findMax()
{
    struct BSTnode *temp = root;
    while (temp -> right)
    {
        temp = temp -> right;
    }
    printf("Minimum node data in this BST is %d\n",temp -> data);
    return temp;
}
int main ()
{
    int ch;
    while (1)
    {
        printf("Enter your Choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                insertNodeBST();
                break;
            case 2:
                PreOrder(root);
                break;
            case 3:
                PostOrder(root);
                break;
            case 4:
                InOrder(root);
                break;
            case 5:
                findMax();
                break;
            case 6:
                findMin();
                break;
            default:
                break;
        }
    }
    return 0;
}
