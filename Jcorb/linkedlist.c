#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

typedef struct node node_t;

void printlist(node_t *head){
    node_t *temporary = head;

    while(temporary != NULL){
        printf("%d | ", temporary->value);
        
        temporary = temporary->next;
    }

    printf("\n");
}

node_t *create_new_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;

    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert){
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

node_t *find_node(node_t *head,int value){
    node_t *tmp = head;
    while(tmp != NULL){
        if(tmp->value == value) return tmp;

        tmp = tmp->next;
    }

    return NULL;
}

void *insert_after_node(node_t *node_to_insert_after, node_t* newnode){
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}

int main(){
    node_t *temp;
    node_t *head = NULL;
    
    for (int i = 0; i < 25; i++)
    {
        temp = create_new_node(i);
        head = insert_at_head(&head,temp);       
    }
    
  
    node_t* found = find_node(head,15);
    printf("look at: %d\n ",found->value);
    insert_after_node(found,create_new_node(102));
    printlist(head);
  
   
  return 0;

}