#include <stdio.h>


/*
    Automatic conversion / implicit conversion.
*/

void automatic_conversion(){
    int number;
    double number2 = 17.5;
    number = number2;

    int number3 = 5;
    
    double result = number2 / number3;

    printf("%d",number);


    printf("%lf",result);
}

void manually_conversion(){
    int number = 5;
    int number2 = 2;

    double result = (double)number / number2;

    printf("%lf", result);
}



int main(){

    
}