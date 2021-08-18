#include <stdio.h>

int main(void){
    
    double tempCelsius;
    
    scanf("%lf", &tempCelsius);
    double tempFahrenheit = (tempCelsius * 9.0/5.0) + 32.0;
    
    printf("%0.1lf \n",tempFahrenheit);
    
    
    return 0;
}