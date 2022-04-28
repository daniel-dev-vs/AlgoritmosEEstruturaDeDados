#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    for(int i = 0; i < n * 2; i++){
        for(int j = 0; j < (n * 2) -1; j++){
            printf("%d ", (n));
        }
        printf("\n");
        
    }
    return 0;
}