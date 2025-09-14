// Write a C program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int decimal_num;
    int binary_array[32]; 
    int i = 0; 

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    
    if (decimal_num == 0) {
        printf("Binary equivalent: 0\n");
        return 0; 
    }

    
    while (decimal_num > 0) {
        binary_array[i] = decimal_num % 2; 
        decimal_num = decimal_num / 2;    
        i++;                               
    }


    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    printf("\n");

    return 0; 
}