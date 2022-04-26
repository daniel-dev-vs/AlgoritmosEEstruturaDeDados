#include <stdio.h>

/*
    Operator	Meaning
+	addition
-	subtraction
*	multiplication
/	division
%	remainder after division (modulo)

*/

void operations(){
    int number1 = 34;
    int number2 = 12;
    
    // + adds values of two variables
    int sum = number1 + number2;
    printf("Sum = %d", sum);

    number1 = 33;
    number2 = 14;
 
    int difference = number1 - number2;
    printf("Difference = %d", difference);
}
int main(){
    return 0;
}