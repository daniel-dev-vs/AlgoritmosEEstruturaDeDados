#include <stdio.h>



void int_array(){

    int numbers[10];

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    for(int i = 0; i < 4; i++){
        printf("%d\n", numbers[i]);
    }

}

void grades_average(){
    int grades[3];
    int average;
    

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;
        

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d\n", average);

}

int main(){
    grades_average();
    return 0;
}