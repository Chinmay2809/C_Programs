// Write a C program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h> 

int main() {
    int number;

   
    printf("Enter an integer: ");
    
    scanf("%d", &number);

    
    if (number <= 0) {
        
        if (number == 0) {
            printf("You entered zero.\n"); 
        } else {
            printf("You entered a negative number.\n"); 
        }
    } else {

        printf("You entered a positive number.\n"); 
    }

    return 0; 
}