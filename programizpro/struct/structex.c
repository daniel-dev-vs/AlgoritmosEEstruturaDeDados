#include <stdio.h>
#include <string.h>

//Struct example.
struct Person {
    char name[50];
    int citNo;
    float salary;

};

typedef struct Address {
    char street[50];
    int number;
    int zip_code;

} Address;


struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integers;
} n;


int main(){
    
    struct Person p;
    Address address;
    address.number = 12;
    address.zip_code = 6055442;
    strcpy(address.street, "Name of the street.");

    p.citNo = 2;
    strcpy(p.name, "Daniel Ferreira");
    p.salary = 12.500;

    printf("%d , %s, %.3f", p.citNo,p.name,p.salary);

    return 0;
}