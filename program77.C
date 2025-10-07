// Write a C program to check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int areDiagonalElementsDistinct(int matrix[][10], int n) {
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (matrix[i][i] == matrix[j][j]) {
                return 0; 
            }
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("\nThe elements on the main diagonal are distinct.\n");
    } else {
        printf("\nThe elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}