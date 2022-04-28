#include <stdio.h>
 

 /*
    char str1[] = "abcd";
char str2[] = {'a', 'b', 'c', 'd', '\0'};
char str3[5] = {'a', 'b', 'c', 'd', '\0'};

 */
int main() {
 
  char name[20];
  
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
 
  printf("Your name is %s", name);
 
  return 0;
}