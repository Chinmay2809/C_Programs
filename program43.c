// Write a C program to check if a number is a strong number.

#include <stdio.h>


long long calculateFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int isStrongNumber(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;

    
    if (num == 0) {
        return 0; 
    }

    while (num > 0) {
        int digit = num % 10; 
        sumOfFactorials += calculateFactorial(digit); 
        num /= 10; 
    }

    return (sumOfFactorials == originalNum); 
}

int main() {
    int number;

    printf("Enter a number to check if it's a strong number: ");
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}