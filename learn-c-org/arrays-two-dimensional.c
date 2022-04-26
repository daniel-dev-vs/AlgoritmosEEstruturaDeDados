#include <stdio.h>
/*
    In the previous tutorials on Arrays, we covered, well, arrays and how they work. 
    The arrays we looked at were all one-dimensional, 
    but C can create and use multi-dimensional arrays. Here is the general form of a multidimensional array declaration:
    type name[size1][size2]...[sizeN];
    
    int a[3][4] = {  
   {0, 1, 2, 3} ,    initializers for row indexed by 0 
   {4, 5, 6, 7} ,   initializers for row indexed by 1 
   {8, 9, 10, 11}    initializers for row indexed by 2 

*/
void two_dimensional_array(){
    int array_two_dimensional[3][3];

    array_two_dimensional[0][0] = 1;
    array_two_dimensional[0][1] = 1;
    array_two_dimensional[0][2] = 1;
    array_two_dimensional[1][0] = 2;
    array_two_dimensional[1][1] = 2;
    array_two_dimensional[1][2] = 2;
    array_two_dimensional[2][0] = 3;
    array_two_dimensional[2][1] = 3;
    array_two_dimensional[2][2] = 3;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", array_two_dimensional[i][j]);
        }
         printf("\n");
    }
}

void two_dimensional_char_array(){
    char vowels[][5] = {
        {'A','E', 'I', 'O', 'U' },
        {'a', 'e', 'i', 'o', 'u'}
    };

    for(int i = 0; i < 1; i++){
        for(int j = 0; j <= 0; j++){
            printf("%s", &vowels[i][j]);
            
        }
        printf("\n");
    }
}

int main(){
    two_dimensional_array();
    printf("\n");   
    two_dimensional_char_array();
    return 0;
}