#include <stdio.h>
#include <stdlib.h>

typedef struct StackLinkedList
{
    int value;
    struct StackLinkedList *stack;
} StackLinkedList;

void push(StackLinkedList **stl, int value)
{
    
        StackLinkedList *stackLL = malloc(sizeof(StackLinkedList));
        stackLL->value = value;

       
       StackLinkedList *stlAux = *stl;
        *stl = stackLL;
        stackLL->stack = stlAux;
        

    
}

int pop(StackLinkedList *stl)
{
    if (stl == NULL)
        printf("Stack is Empty - POP");

   
    int value = stl->value;
    *stl = *stl->stack;
    

    printf("popping...\n");
    

    return value;
}

int peek(StackLinkedList *stl, int value)
{
    
    if (stl == NULL)
    {
        printf("Stack is empty - PEEK");
        return -1;
    }
        

    if (stl->stack == NULL)
        return stl->value;

    

    StackLinkedList* head = stl;
    int count = 0;
    while(head != NULL){
        if(head->value == value){
            return count;
        }

        count++;
        head = head->stack;
    }

    return -1;
}

int empty(StackLinkedList *stl)
{
    if (stl == NULL)
        return 1;

    return 0;
}

int search(StackLinkedList *stl, int value)
{
    int count = -1;

    if (stl == NULL)
        return count;

    StackLinkedList *head = stl;

    while (head != NULL)
    {
        if (stl->value == value)
            return count;

        count++;
        head = stl->stack;
    }

    return count;
}

void show(StackLinkedList *st)
{
    StackLinkedList *head = st;
    int count = 0;
    
    while (head != NULL)
    {

        printf("position {%d}, value {%d}\n", count, head->value);
        head = head->stack;
        count++;
    }
}

StackLinkedList* create_new_stack(int value){
    StackLinkedList* stl = malloc(sizeof(StackLinkedList));
    stl->value = value;
    stl->stack = NULL;

    return stl;
}

int main()
{
    StackLinkedList *st = create_new_stack( 1);

    push(&st, 1);
    printf("$d\n",st->value);
    push(&st, 2);
    push(&st, 3);
    pop(st);

    show(st);
    int pk = peek(st,1);
    printf("peek:{%d}\n",pk);

    pop(st);
    pop(st);
    show(st);

    return 0;
}
