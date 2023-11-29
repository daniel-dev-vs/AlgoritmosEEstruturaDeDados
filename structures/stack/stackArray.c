#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    int numbers[5];
} stack;

void push(stack *st, int new_value)
{

    if (st->top < 5)
    {

        st->top++;
        st->numbers[st->top - 1] = new_value;
    }
    else
    {
        printf("stack is full \n");
    }
}

int pop(stack *st)
{

    if (st->top > 0)
        st->top--;
    else
        printf("stack is empty \n");
}


int peek(stack *st){
    if(st->top > 1){
        printf("stack is empty \n");
        return -1;
    }      
    else
        return st->numbers[st->top];
    
}

int empty(stack *st){
    return st->top;
}

int search(stack *st, int value){
    for(int i =0; i < st->top; i++){
        if(st->numbers[i] == value)
            return i;
    }

    return -1;
}
int main()
{
    

    stack *stack = malloc(sizeof(stack));

    int isEmpty = empty(stack);
    printf("{0} - empty, {1} it has value:%d \n", isEmpty);
    printf("top %d\n", stack->top);

   pop(stack);
   push(stack, 11);
   push(stack, 12);
   push(stack, 13);
   int index = search(stack,12);

   printf("index of 12: %d\n",index);
   

    printf("top:%d \n", stack->top);
    printf("index top:%d\n", stack->numbers[stack->top -1]);
    pop(stack);

    return 0;
}
