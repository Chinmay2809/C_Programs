// Write a C program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

#include <stdio.h>

int main() {
    int i, j, space;
    int num_rows = 5; 
    
    for (i = 1; i <= num_rows; i++) {
       
        for (space = 1; space <= num_rows - i; space++) {
            printf(" ");
        }
       
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = num_rows - 1; i >= 1; i--) {
  
        for (space = 1; space <= num_rows - i; space++) {
            printf(" ");
        }
    
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}