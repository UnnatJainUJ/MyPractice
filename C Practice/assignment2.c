//Q8

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *left, *right;
};
struct node *createnode(int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}
static int count = 0;
int countnodes(struct node *root)
{
    if (root != NULL)
    {

        if (root->left != 0 && root->right != 0)
        {
            count++;
            countnodes(root->left);
            countnodes(root->right);
        }
    }
    return count;
}

int main()
{
    struct node *newnode = createnode(20);
    newnode->left = createnode(30);
    newnode->right = createnode(40);
    newnode->left->left = createnode(10);
    newnode->left->right = createnode(15);
    newnode->right->left = createnode(25);
    newnode->right->right = createnode(35);
    printf("Number of full nodes in tree = %d ", countnodes(newnode));
    printf("\n");
    count = 0;

    return 0;
}