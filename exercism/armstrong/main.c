#include <stdio.h>
#include "armstrong_numbers.h"
#include <stdbool.h>


int main(){

    bool isArmstrong = is_armstrong_number(9);
    printf("is armstrong %d\n", isArmstrong);
    return 0;
}