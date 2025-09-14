// Write a C program to find the product of odd digits of a number.

#include <stdio.h> 

int main() {
    int num;         
    int digit;       
    int product_odd = 1; 

   
    printf("Enter a number: ");
   
    scanf("%d", &num);

   
    while (num > 0) {
   
        digit = num % 10;

       
        if (digit % 2 != 0) {
           
            product_odd *= digit;
        }

       
        num /= 10;
    }

    
    printf("Product of odd digits: %d\n", product_odd);

    return 0; 
}