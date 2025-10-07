// Write a C program to perform diagonal traversal of a matrix.

#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMain Diagonal Elements: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Anti-Diagonal Elements: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", matrix[i][SIZE - 1 - i]);
    }
    printf("\n");

    return 0;
}