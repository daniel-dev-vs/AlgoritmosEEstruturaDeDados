#include <stdio.h>


/*
    Example of take an input
*/

void example(){
    int age;
  
  printf("Enter your age: ");
  scanf("%d", &age);
 
  printf("Age is %d", age);

 char alphabet;
  double salary;

  // take character input
  printf("Enter a character: ");
  scanf("%c", &alphabet);
 
 
  // take double input
  printf("\nEnter your salary: ");
  scanf("%lf", &salary);
  
  printf("Character Input: %c", alphabet);
  printf("\nSalary Input: %.2lf", salary);
}

void multiples_scanf(){
    char alphabet;
  double salary;
  
  // take character and double input together
  printf("Enter input values (char and double): ");
  scanf("%c %lf", &alphabet, &salary);
  
  printf("Character Input: %c", alphabet);
  printf("\nSalary Input: %.2lf", salary);


}
int main(){
    return 0;
}