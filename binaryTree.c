#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *
newNode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}

void PreOrderTraversal(struct node *T)
{
    if (T != NULL)
    {
        printf("%d  ", T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->right);
    }
}

void PostOrderTraversal(struct node *T)
{
    if (T != NULL)
    {
        PostOrderTraversal(T->left);
        PostOrderTraversal(T->right);
        printf("%d  ", T->data);
    }
}
void InOrderTraversal(struct node *T)
{
    if (T != NULL)
    {
        InOrderTraversal(T->left);
        printf("%d  ", T->data);
        InOrderTraversal(T->right);
        }
}




int main()
{
    struct node *p = newNode(1);
    p->left = newNode(2);
    p->right = newNode(3);
    p->left->right = newNode(6);
    p->right->left = newNode(4);
    p->right->right = newNode(5);
    PreOrderTraversal(p);
    return 0;
}