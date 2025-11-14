// Write a C program to assign explicit values starting from 10 and print them.

#include <stdio.h> 

int main() {
    
    int numbers[5] = {10, 11, 12, 13, 14}; 

    int i; 

    printf("The explicitly assigned values are:\n"); 

    
    for (i = 0; i < 5; i++) {
         
        printf("Element %d: %d\n", i, numbers[i]); 
    }

    return 0; 
}