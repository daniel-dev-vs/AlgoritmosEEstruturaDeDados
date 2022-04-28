#include <stdio.h>


// function to find the largest number among three numbers
int getLargestNumber(int n1, int n2, int n3) {
 
  // return n1 if it's the largest number
  if (n1 > n2 && n1 > n3) {
    return n1;
  }
 
  // return n2 if it's the largest number
  else if (n2 > n1 && n2 > n3) {
    return n2;
  }
 
  // else return n3
  else {
    return n3;
  }
}

int sum_of_natural_numbers(int n){
    int total = 0;
    
    for(int i = 1; i <= n; i++)
        total += i;

    return total;
}


int factorial_of_natural_numbers(int n){
    int total = 1;
    
    for(int i = 1; i <= n; i++)
        total *= i;

    return total;
}
int main(){

    printf("%d\n", factorial_of_natural_numbers(5));
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

// function to check even or odd
// if the number is even, 1 is returned
// if the number is odd, 0 is returned

bool checkOddEven(int number) {
  
  if (number % 2 == 0) {
    return 1;
  }
  else {
    return 0;
  }
}
