#include <stdio.h>
#include <math.h>
#include <ctype.h>

double root_example(double);

double croot_example(double val){
    return cbrt(val);
}

int powerOfANumber(int base, int power){
    return pow(base,power);
}

char upperC(char val){
    return toupper(val);
}

char lowerC(char val){
    return tolower(val);
}

short if_is_digit(char val){
    return isdigit(val);
}


int main(){
    
    int power = powerOfANumber(5,2);
    printf("%d \n", power);
    double cresult = croot_example(125);
    double result = root_example(25);
    printf("%2.lf\n",cresult);
    printf("%2.lf\n",result);

    char value = 'a';

    printf("%c, %c, %d\n", lowerC(value),upperC(value), if_is_digit(value));
}

double root_example(double val){
    return sqrt(val);
}