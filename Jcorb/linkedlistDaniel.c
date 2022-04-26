#include <stdlib.h>
#include <stdio.h>

struct n {
    int value;
    struct n* next;
};

typedef struct n node;

int main(){    
           
    node n1, n2, n3;
              
    n1.value = 12;
    n1.next = &n2;

    n2.value = 116;
    n2.next = &n3;

    n3.value = 26;
    n3.next = NULL;


    node* tmp = &n1;
    
    while(tmp != NULL){
        printf("%d - ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
   
    
    
    return 0;
}