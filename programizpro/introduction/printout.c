#include <stdio.h>


void print_double_variable(){
    double number = 36.43;
    printf("%.2lf\n", number);
}

int main(){
    printf("I love C Programming\n");

    print_double_variable();
    
    return 0;
}