#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct node *next;
} node;


void printLinkedList(node * head){
    node* current = head;
    while(current != NULL){
        printf("%d\n",current->value);
        current = current->next;
    }
}


int main(){
    node * head = malloc(sizeof(node));
    node* list1 = malloc(sizeof(node));
    node* list2 = malloc(sizeof(node));
    list1->value = 2;
    list2->value = 3;

    head->next = list1;
    list1->next = list2;

    head->value = 1;

    printLinkedList(head);


    
    
    return 0;
}