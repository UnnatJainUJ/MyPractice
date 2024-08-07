#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Stack {
    int data;
    struct Stack* next;
};
 
struct Stack* newNode(int data)
{
    struct Stack* stackNode =
      (struct Stack*)
      malloc(sizeof(struct Stack));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
 
int isEmpty(struct Stack* root)
{
    return !root;
}
 
void push(struct Stack** root, int data)
{
    struct Stack* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
 
int pop(struct Stack** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct Stack* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int main()
{
    struct Stack* root = NULL;
 
    push(&root, 19);
    push(&root, 20);
    push(&root, 21);
 
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    // printf("%d popped from stack\n", pop(&root));
    // printf("%d popped from stack\n", pop(&root));
 
    return 0;
}