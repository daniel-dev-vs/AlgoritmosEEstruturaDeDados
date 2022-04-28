#include <stdio.h>


double calculate_grade(double scores[]){
    double sum = 0;

    for(int i =0; i < 5; i++){
        sum += scores[i];
    }

    int average = sum / 5;

    return average;
}

void print_grade(int grade){
    if(grade >79){
        printf("%c", 'A');
    } else if(grade > 59){
        printf("%c", 'B');
    } else if( grade > 49){
        printf("%c", 'C');
    } else{
        printf("%c", 'F');
    }
}

int main(){
    double scores[] = {55,64,75,80,65};
    double score = calculate_grade(scores);
    print_grade(score);
    
    return 0;
}

