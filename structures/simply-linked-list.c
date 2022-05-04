#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int value;
    struct node *next;
} node;

node* head = NULL;

void push(int new_value){
    
    node* new_node = (node*)malloc(sizeof(node));
    new_node->value = new_value;
    new_node->next = head;        
    head = new_node;
}

void delete(int val_to_delete){
    node* current = head;
    node* previous = NULL;
    node* next = NULL;
    while(current != NULL){
       
        if(current->value == val_to_delete){
            next = current->next;
            break;
        }
        previous = current;
        current = current->next;
    }

    if(previous == NULL){
            free(current);
            head = next;
            return;
        }

    previous->next = next;
    free(current);

}

void insertAfter(int value, int new_value){
    node* current = head;
    while(current != NULL){
        if(current->value == value){
            node* new_node = (node*)malloc(sizeof(node));
            new_node->value = new_value;
            new_node->next = current->next;
            current->next = new_node;
            break;
        }

        current = current->next;
    }
    if(current == NULL)
        push(new_value);
}

void append(int new_value){
    node* last = head;

    if(last == NULL)
        printf("the linked list cannot be null.");
    
    while(last->next != NULL){
            last = last->next;
    }

    node * new_node = (node*)malloc(sizeof(node));
    new_node->value = new_value;
    last->next = new_node;
}


void printLinkedList(){
    node* current = head;
    printf("print:");
    while(current != NULL){
        printf("%d-",current->value);
        current = current->next;
    }
    printf("\n");
}


int main(){
    
    push(8);
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    insertAfter(2,7);
    append(54);
    push(1);
    
    printLinkedList();    
    delete(5);
    printf(" deleted 5\n");
    printLinkedList();
    delete(1);
    printf(" deleted 1\n");
    printLinkedList();
    delete(54);
    printf(" deleted 54\n");
    printLinkedList();
    push(23);
    push(24);
    push(25);
    printLinkedList();


    return 0;
}