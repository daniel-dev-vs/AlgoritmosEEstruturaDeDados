#include <stdio.h>



/*
    The different types of variables define their bounds.
    A char can range only from -128 to 127, whereas a long can range from -2,147,483,648 to 2,147,483,647.
    (long and other numeric data types may have another range on different computers, 
    for example - from –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 on 64-bit computer)

*/

/*
Integers like mathematics terms is the whole numbers which can be positive or negative. i
 Defined using char, int, short, long or long long.
 Example of declations:
*/

void integers_type(){
    char its_a_char = 'a';
    printf("it's a char type:%d, size in bytes:%ld \n", its_a_char, sizeof(char)); 

    printf("it's a char type:%c, size in bytes:%ld \n", its_a_char, sizeof(char)); 
       

    short number_short_type = 5;
    printf("it's a short type :%d,  size in bytes:%ld \n", number_short_type, sizeof(short));   


    int number_int_type = 10.5;
    printf("it's a int type :%d,  size in bytes:%ld \n", number_int_type, sizeof(int));   

    long number_long_type = 5000;
    printf("it's a long type :%ld, size in bytes:%ld  \n", number_long_type, sizeof(long));   
    

    long long number_longlong_type = 5000;
    printf("it's a long long type :%lld, size in bytes:%ld  \n", number_longlong_type,sizeof(long));  

    printf("----------------------------------------------------------\n\n");


}

/*
    Unsigned integers - whole numbers which can only be positive.
    Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
*/

void unsigned_integers(){
    unsigned char its_a_char = 'b';
    printf("it's a unsigned char type:%u,  size of in bytes:%ld \n", its_a_char, sizeof(its_a_char));    
    printf("it's a unsigned char type:%c,  size of in bytes:%ld \n", its_a_char, sizeof(its_a_char)); 

    unsigned short number_short_type = 20;
    printf("it's a unsigned short type :%u, sizeof in bytes: %ld\n", number_short_type, sizeof(number_short_type));   


    unsigned int number_int_type = 7000;
    printf("it's a unsigned int type :%u, sizeof in bytes: %ld \n", number_int_type, sizeof(number_int_type));   

    unsigned long number_long_type = 5665000;
    printf("it's a unsigned long type :%lu, sizeof in bytes: %ld \n", number_long_type, sizeof(number_long_type));   
    

    unsigned long long number_longlong_type = 1000335000;
    printf("it's a unsigned long long type :%llu, sizeof in bytes: %ld \n", number_longlong_type, sizeof(number_longlong_type));  

    printf("----------------------------------------------------------\n\n");
}








int main(){
    
    integers_type();
    unsigned_integers();
    char v = -1;
    
    return 0;
}