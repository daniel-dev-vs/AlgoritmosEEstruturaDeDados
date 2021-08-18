#include <stdio.h>

int main(void){
    
    double pounds;
    int price = 45, quantity = 0;
    
    scanf("%lf", &pounds);
    
    quantity = (int)pounds/120;
    int rest = (int)pounds % 120;
    
    if(rest != 0)
        quantity+=1;
        
    printf("%d", quantity * price);
    
    return 0;
}