#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int greater_limit(int val, int limit){
    return val < limit;
}
int and_operator(int a, int b){
    int result = a & b;
            
    return result;
}
int or_operator(int a, int b){
    int result = a | b;
    
    return result;
}

int xor_operator(int a, int b){
    int result = a ^ b;
    return result;
}

void calculate_the_maximum(int n, int k) {
  
  int and = 0;
  int or = 0;
  int xor = 0;
  //Write your code here.
  for(int i = 1; i <= n; i++){
      for(int j = i+1; j <= n; j++){
         int a = and_operator(i,j);         
         if(greater_limit(a,k) == 1 && a > and){
             and = a;
         }

         int o = or_operator(i,j);
         if(greater_limit(o,k) == 1 && o > or){
             or = o;
         }
        
        int x = xor_operator(i,j);
        if(greater_limit(x,k) == 1 && x > xor){
             xor = x;
         }


      }
  }



  printf("%d\n%d\n%d\n", and, or, xor);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
