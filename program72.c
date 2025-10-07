// Write a C program to find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;      
    int sum = 0;   

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j]; 
        }
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}