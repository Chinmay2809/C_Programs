// Write a C program to find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int size; 
    int i, j; 
    int sum = 0; 

    printf("Enter the size of the square matrix (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &size);

    int matrix[size][size]; 

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        sum += matrix[i][i]; 
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the main diagonal elements: %d\n", sum);

    return 0;
}