#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;
    int digitCount = 0;
    int number;
    
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    
    do{
        //In every cycle the value of "n" is assigning to the "number"
        //And "digitCount" value is set to "0".
        //Because these two variables are just for the calculation of the digit count of "n"
        number = n;
        digitCount = 0;
        
        //Calculate digit count of "n", and assign the result to "digitCount"
        do {
            number /= 10;
            ++digitCount;
        } while (number != 0);
        
        //Divide "n" to needed 10th power to calculate first digit's value
        //For example if the n = 10564, then we need to divide it to 10^4 to calculate biggest digit's value
        //Needed 10th power is equal to digit count - 1 in every time
        sum += (n / ((int) pow(10, (digitCount - 1))));
        
        //After the digit value added to "sum", then remainder value of last calculation
        //is assigning to the "n"
        n = (n % (int) (pow(10, (digitCount - 1))));
        
        
    } while (n != 0);
    
    
    
    printf("%d", sum);
    
    return 0;
}
