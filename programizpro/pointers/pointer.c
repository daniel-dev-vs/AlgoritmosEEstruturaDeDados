#include <stdio.h>

void example(){

     // create a variable
  int number = 36;
 
  // create a pointer variable
  int* pt;
  // assign address to pointer
  pt = &number;
  
  printf("Value of pt: %p\n", pt);
  printf("Address of number: %p", &number);
}

void another_example(){
    int var = 13;
 
  printf("Value of var: %d\n", var);
  printf("Address of var: %p", &var);
}
int main() {
 example();
  
 
  return 0;
}