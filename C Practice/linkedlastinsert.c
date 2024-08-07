#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head;

void insert_node(int data)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node *));

    newnode->data = data;

    newnode->next = head;

    head = newnode;
}

void insertlast(struct node **head, int new_data)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    struct node *last = *head;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}
void insertAfter(struct node*prev_node, int new_data)
{
    
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL\n");
      return;
    }
 
    
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
 
    
    new_node->data  = new_data;
 
    
    new_node->next = prev_node->next;
 
    
    prev_node->next = new_node;
}

void print()
{

    struct node *p;
    p = head;

    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
int main()
{

    head = NULL;
    insert_node(2);
    insertlast(&head , 78);
    insert_node(4);
    insert_node(6);
    insert_node(8);
    insertAfter(head,678);
    print();

    return 0;
}