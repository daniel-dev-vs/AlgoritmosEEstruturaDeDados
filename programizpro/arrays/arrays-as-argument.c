#include <stdio.h>

// function that accepts array as parameter
void printArray(int ages[]) {

  // print the second array element
  printf("%d\n", ages[1]);
  
  // print the fourth array element
  printf("%d", ages[5]);
}

int main() {

  int ages[] = {25, 30, 17, 38, 21,24,23};

  // function call with array as argument
  printArray(ages);

  return 0;
}