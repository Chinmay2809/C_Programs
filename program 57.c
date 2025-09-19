// Write a C program to find the sum of array elements.

#include <stdio.h> 

int main() {
 
    int numbers[5] = {10, 20, 30, 40, 50};

  
   
    int sum = 0;

    int i;

    for (i = 0; i < 5; i++) {
       
        sum = sum + numbers[i];
    }

   
    printf("The sum of the array elements is: %d\n", sum);

  
    return 0;
}