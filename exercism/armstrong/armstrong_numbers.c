#include "armstrong_numbers.h"
#include <stdbool.h>
#include <stdio.h>

int calculate_power(int base, int exp){
    int power = 1;

    while(exp !=0){
        power = power*base;
        exp--;
    }

    return power;
}

bool is_armstrong_number(int candidate){
    int number = candidate, i = 0, numbers[10];
    
    while(number > 0){
        numbers[i] = number % 10;
        i++;
        number = number/10;
    }
    int j = 0, sum = 0;
    while(j < i){
        sum += calculate_power(numbers[j],i);

        j++;
    }

    return (sum==candidate);
}



