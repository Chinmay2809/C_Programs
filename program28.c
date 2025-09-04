// Write a C program to print the product of even numbers from 1 to n.

#include <stdio.h> 

int main() {
    int n;          
    long long product = 1; 
                           

    
    printf("Enter a positive integer (n): ");
    
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

   
    for (int i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
           
            product *= i;
        }
    }

    
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0; 
}