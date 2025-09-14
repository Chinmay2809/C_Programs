// Write a C program to check if a number is a perfect number.


#include <stdio.h>

int main() {
    int number;
    int sum_of_divisors = 0;
    int i;

  
    printf("Enter a positive integer: ");
    scanf("%d", &number);

   
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

   
    for (i = 1; i < number; i++) {
        if (number % i == 0) { 
            sum_of_divisors += i;
        }
    }

    
    if (sum_of_divisors == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0; 
}
