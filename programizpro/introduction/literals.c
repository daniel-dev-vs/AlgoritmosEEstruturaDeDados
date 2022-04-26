#include <stdio.h>

void integer_literals(){
    printf("%d, %d, %d \n", 25, -54, 923);
    
    
}

void floating_literals(){
    printf("%f, %f, %f \n", 32.9, -56.5, 9.0);
}

void character_literals(){
    printf("%d, %d , %d  \n", 's', '}', '*');
}

int main(){

    integer_literals();
    floating_literals();
    character_literals();
return 0;
}