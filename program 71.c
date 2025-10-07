// Write a C program to read and print a matrix.

#include <stdio.h> 

int main() {
    int rows, cols; 

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]); 
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0; 
}