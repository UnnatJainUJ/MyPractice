#include<stdio.h>  
#include<stdlib.h>
 #include<string.h> 
 char name[300];
struct node  
{  
    struct node *next;  
    char data[35];  
};  
struct node *head; 
void node_insert(char name[])    
{    
        
    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
    struct node *temp;  
    if(ptr == NULL)    
    {    
        printf("\nOVERFLOW");    
    }    
    else     
    {    
        ptr -> data[35] = name[35];    
        if(head == NULL)    
        {    
            head = ptr;    
            ptr -> next = head;    
        }    
        else     
        {       
            temp = head;    
            while(temp->next != head)    
                temp = temp->next;    
            ptr->next = head;     
            temp -> next = ptr;     
            head = ptr;    
        }     
    printf("\nNode Inserted\n");  
    }    
                
}     
void main ()  
{  
    int choice,item;
    char naam[35];  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%s",&naam);  
        node_insert(naam);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  

      