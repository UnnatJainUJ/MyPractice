#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void printInorder(struct node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    printf("%d\t", node->data);
    printInorder(node->right);
}

void printPreorder(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d\t", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}
void printPostorder(struct node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);
    printf("%d\t", node->data);
}
struct node *insert(struct node *node, int data)
{
    if (node == NULL)
    {
        return newnode(data);
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else
    {
    }

    node->right = insert(node->right, data);
    return node;
}
struct node *minvaluenode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
        return current;
    }
}
struct node *deletion(struct node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)
    {
        root->left = deletion(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deletion(root->right, data);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minvaluenode(root->right);
        root->data = temp->data;
        root->right = deletion(root->right, temp->data);
    }
    return root;
}
void main()
{
    struct node *root = newnode(10);
    root->left = newnode(20);
    root->right = newnode(30);
    root->left->left = newnode(40);
    root->left->right = newnode(50);
    root->right->left = newnode(60);
    root->right->right = newnode(70);

    printf("\n*Original traversal:*\n");
    printf("\nPrinting Preorder traversal :\n");
    printPreorder(root);

    printf("\nPrinting Inorder traversal :\n");
    printInorder(root);

    printf("\nPrinting Postorder traversal :\n");
    printPostorder(root);

    root = insert(root, 64);
    root = insert(root, 99);

    printf("\n\n*Printing after insertion :*\n");
    printf("\nPrinting Preorder traversal :\n");
    printPreorder(root);

    printf("\nPrinting Inorder traversal :\n");
    printInorder(root);

    printf("\nPrinting Postorder traversal :\n");
    printPostorder(root);

    root = deletion(root, 64);

    printf("\n\n***Printing after deletion :*\n");
    printf("\nPrinting Preorder traversal :\n");
    printPreorder(root);
    printf("\nPrinting Inorder traversal :\n");
    printInorder(root);

    printf("\nPrinting Postorder traversal :\n");
    printPostorder(root);
}
