#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

typedef struct SinglyLinkedListNode SinglyLinkedListNode;
typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
};

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));

    node->data = node_data;
    node->next = NULL;

    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);

    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }

    (*singly_linked_list)->tail = node;
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(head == NULL)
        return;
        
        SinglyLinkedListNode* current = head;
        
        while(current != NULL){
            printf("%d", current->data);
            current = current->next;
        }

}


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

        if(head1 == NULL && head2 == NULL)
            return head1;

        if(head1 == NULL && head2 != NULL)
            return head2;

        if(head1 != NULL && head2 == NULL)
            return head1;

        SinglyLinkedListNode* curr = head1;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = head2;

        curr = head1;

        while(curr != NULL){
            SinglyLinkedListNode* next = curr->next;
            if(curr->data > next->data){
                int tmp = curr->data;
                curr->data = next->data;
                next->data = tmp;
            }

            curr = curr->next;
        }

        return head1;

        
}

int main(){
    SinglyLinkedList* list = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));

    list->head = create_singly_linked_list_node(1);
    SinglyLinkedListNode* node1 = create_singly_linked_list_node(2);
    SinglyLinkedListNode* node2 = create_singly_linked_list_node(3);
    list->head->next = node1;
    node1->next = node2;


    SinglyLinkedList* list2 = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    list2->head = create_singly_linked_list_node(1);
    SinglyLinkedListNode* nnode1 = (SinglyLinkedListNode*)malloc(sizeof());

    return 0;
}