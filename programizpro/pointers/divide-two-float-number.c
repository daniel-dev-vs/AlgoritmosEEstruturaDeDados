// Replace ___ with your code
#include <stdio.h>

/*// function to divide two numbers
void divideNumbers(double *n1, double *n2, double *result){
    *result = *n1 / *n2;
}

int main() {

    // take input values for number1 and number2
    double number1;
    double number2;
    scanf("%lf %lf", &number1, &number2);
    
    double result;

    // call function with addresses of number1, number2 and result
    divideNumbers(&number1, &number2, &result);
    
    // print the total
    printf("%.2lf", result);

    return 0;
}*/

#include <stdio.h>
 
// function to add two numbers
int* addNumbers(int* n1, int* n2, int* sum) {
  *sum = *n1 + *n2;
  return sum;
}
 
int main() {
 
  int number1 = 54;
  int number2 = 89;
  int sum;
 
  // call function with address as parameter
  int* result = addNumbers(&number1, &number2, &sum);
  printf("Result: %d", *result);
 
  return 0;
}