/*

strlen() - finds the length of a string
strcpy() - copies a string to another
strcat() - joins two strings together
strcmp() - compares two strings

*/

#include <stdio.h>
#include <string.h>

void copy_string(){
    char series[] = "Squid Game";
 
  // create new string bestSeries with
  // the same length as the first string series
  char bestSeries[strlen(series)];
 
  // copy series to bestSeries
  strcpy(bestSeries, series);
 
  // print bestSeries
  printf("%s", bestSeries);

}

void copy_string_example(){

    char fruits1[] = "Apple";
  char fruits2[] = "Orange";
 
  strcpy(fruits1, fruits2);
  printf("%s", fruits1);
 


}

void another_example(){
     char series[] = "Squid Game";

  for (int i = 0; i < strlen(series); i++) {
        printf("%c", series[i]);
    }

  printf("%zu", strlen(series));    // 10
  
}
int main() {
    copy_string_example();
    return 0;
    
}