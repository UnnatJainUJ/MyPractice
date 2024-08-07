#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};

void reverse(struct Node** head_ref)
{
	struct Node* prev = NULL;
	struct Node* current = *head_ref;
	struct Node* next = NULL;
	while (current != NULL) {
		next = current->next;

		current->next = prev;

		
		prev = current;
		current = next;
	}
	*head_ref = prev;
}
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
int main()
{
	struct Node* head = NULL;

	push(&head, 878);
	push(&head, 476);
	push(&head, 43467);
	push(&head, 76);

	printf("Given linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed Linked list \n");
	printList(head);
	getchar();
}
