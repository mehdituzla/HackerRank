#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and, or, xor;
    and = or = xor = 0;
    
    //Write your code here.
    
    for(int i = 1; i < n; i++) {
      
        for(int j = i + 1; j <= n; j++) {
          
            //printf("a: %d, b: %d\n", i, j);
            
            and = (i & j) > and && (i & j) < k ? (i & j) : and;
            
            or = (i | j) > or && (i | j) < k ? (i | j) : or;
            
            xor = (i ^ j) > xor && (i ^ j) < k ? (i ^ j) : xor;
        }
      
    }
    
    printf("%d\n%d\n%d", and, or, xor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
