/* Q1
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

void concatenate(struct node *l1,struct node *l2)
{
  struct node *a = copylist(l2);
    if( l1 != NULL && l2!= NULL )
    {
        if (l1->next == NULL)
            l1->next = a;
        else
            concatenate(l1->next,a);
    }
    else
    {
        printf("Either l1 or l2 is NULL\n");
    }
}
struct node* copyList(struct node* head)
{
    if (head == NULL) {
        return NULL;
    }
    else {
        struct node* newnode
            = (struct node*)malloc(
                sizeof(struct node));
  
        newnode->data = head->data;
        newnode->next = copyList(head->next);
  
        return newnode;
    }
}
int main()
{
    struct node *prev,*l1, *l2, *p, *c;
    int n,i;
    printf ("number of elements in l1:");
    scanf("%d",&n);
    l1=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(l1==NULL)
            l1=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("number of elements in l2:");
    scanf("%d",&n);
    l2=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(l2==NULL)
            l2=p;
        else
            prev->next=p;
        prev=p;
    }
    c = copyList(l2);
    concatenate(l1,c);
    printf ("Elements in l1:\n");
    display(l1);
    printf ("Elements in l2:\n");
    display(l2);
    return 0;
}
*/



/* Q2
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void reverse(struct node **head)
{
    struct node *temp = NULL;
    struct node *current = *head;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        *head = temp->prev;
}

void push(struct node **head, int new_data)
{
    struct node *new_node =
        (struct node *)malloc(sizeof(struct node));

    new_node->data = new_data;

    new_node->prev = NULL;

    new_node->next = (*head);

    if ((*head) != NULL)
        (*head)->prev = new_node;

    (*head) = new_node;
}

void display(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    struct node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    printf("\n Original Linked list ");
    display(head);

    reverse(&head);

    printf("\n Reversed Linked list ");
    display(head);

    getchar();
}
*/




#include <stdio.h>  
#include<stdlib.h>    
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
};      
    
struct node *head, *tail = NULL;  
void newnode(int data) {   
    struct node *newnode = (struct node*)malloc(sizeof(struct node));  
    newnode->data = data;  
        
    if(head == NULL) {  
        head = tail = newnode;  
        head->previous = NULL;   
        tail->next = NULL;  
    }  
    else {    
        tail->next = newnode;    
        newnode->previous = tail;    
        tail = newnode;    
        tail->next = NULL;  
    }  
}  
     
int min() {  
    struct node *current = head;  
    int min;  
        
    if(head == NULL) {  
        printf("List is empty\n");  
        return 0;  
    }  
    else {  
        min = head->data;  
        while(current != NULL) {    
            if(min > current->data)  
                min = current->data;  
            current = current->next;  
        }  
    }  
    return min;  
}  
     
int max() {    
    struct node *current = head;  
    int max;  
        
    if(head == NULL) {  
        printf("List is empty\n");  
        return 0;  
    }  
    else {   
        max = head->data;   
        while(current != NULL) {  
            if(current->data > max)   
                max = current->data;  
            current = current->next;  
        }  
    }  
    return max;  
}  
  
 void display(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()  
{  
    newnode(33);  
    newnode(32);  
    newnode(31);  
    newnode(35);  
    newnode(34);   
    printf("Original list is:-\n");
    display(head);
    printf("\nMinimum value node in the list: %d\n", min());   
    printf("Maximum value node in the list: %d", max());  
   
    return 0;  
}  