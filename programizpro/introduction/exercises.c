#include <stdio.h>

/*
    Convert kiolmeters to miles;
*/
void kilometer_to_miles(){
    double km;
  double miles;
 
  // conversion ratio
  double conversionRatio = 0.621;
  
  // take distance input from the user
  printf("Enter distance in km: ");
  scanf("%lf", &km);
 
  // compute distance in miles
  miles = km * conversionRatio;
  printf("Distance in miles: %lf", miles);
}

/*
    Program to convert celsius to fahrenheit:

*/
void celsius_to_fahrenheit(){
    double celsius;
    double fahrenheit;
    int fah = 32.0;
    double rate = 1.8;


    printf("input the degree in celsius to discover the conversion to fahrenheit:\n");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * rate) + fah;

    printf("%.2lf \n", fahrenheit);


}

int main(){
    celsius_to_fahrenheit();

    return 0;
}