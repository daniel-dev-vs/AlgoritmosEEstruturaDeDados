#include <stdio.h>
#include <stdbool.h>

/*
Now let's see a list of all comparison operators in C.

Operator	Expression	Remarks
==	6 == 5	checks if the value 6 is equal to 5
!=	6 != 5	checks if the value 6 is not equal to 5
>	6 > 5	checks if the value 6 is greater than 5
>=	6 >= 5	checks if the value 6 is greater than or equal to 5
>=	6 < 5	checks if the value 6 is less than 5
<=	6 <= 5	checks if the value 6 is less than or equal to 5
Next, we will see examples of these operators one by one.

*/
void example(){
    int studentScore = 38;
  int passingGrade = 40;
 
  bool result = studentScore >= passingGrade;
  printf("%d", result);

}

void isDivisibleBy5(){
     int number;

    // get integer input from the user
    scanf("%d", &number); 

    // print 1 if number is divisible by 5, otherwise print 0
    // Hint: You may have to use the % operator
    bool isDivisibleBy5 = number % 5 == 0;
    printf("%d", isDivisibleBy5);
    return 0;
}


/*

    Now that we have learned about boolean expressions, let's learn about logical operators. There are three logical operators in C Programming.

    Operator	Meaning	Example
    && (AND)	true if both expressions are true	(age > 17) && (salary > 4000)
    || (OR)	true if either of the expressions is true	(age > 17) || (salary > 4000)
    ! (NOT) 	true if the expression is false	!(age > 17)

*/
int main(){
   

    example();
}


