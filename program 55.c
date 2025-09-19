// Write a C program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: \n", n);

    
    for (i = 2; i <= n; i++) {
        is_prime = 1; 

        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;        
            }
        }

        
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0;      