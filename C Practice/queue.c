#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key;
    struct node* next;
};
 
struct Queue {
    struct node *front, *rear;
};
 
struct node* newNode(int k)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = k;
    temp->next = NULL;
    return temp;
}
 
struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
 
void enQueue(struct Queue* q, int k)
{
    struct node* temp = newNode(k);
 
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
 
    q->rear->next = temp;
    q->rear = temp;
}
 
void deQueue(struct Queue* q)
{
    if (q->front == NULL)
        return;
 
    struct node* temp = q->front;
 
    q->front = q->front->next;
 
    if (q->front == NULL)
        q->rear = NULL;
 
    free(temp);
}
 
int main()
{
    struct Queue* q = createQueue();
    enQueue(q, 29);
    enQueue(q, 18);
    enQueue(q, 132);
    deQueue(q);
    printf("Queue Front : %d \n", q->front->key);
    printf("Queue Rear : %d", q->rear->key);
    return 0;
}