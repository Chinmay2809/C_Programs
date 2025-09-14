// Write a C program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

   
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

   
    while (number != 0) {
        remainder = number % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10; 
    }

   
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0; 
}