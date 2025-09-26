// Wite a C program to rotate an array to the right by k positions.

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotateRight(int arr[], int size, int k) {
   
    k = k % size;
    if (k < 0) {
        k = k + size; 
    }

    int temp[k]; 

    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3; 

    printf("Original array: ");
    printArray(arr, size);

    rotateRight(arr, size, k);

    printf("Array after right rotation by %d positions: ", k);
    printArray(arr, size);

    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    printf("\nOriginal array 2: ");
    printArray(arr2, size2);

    rotateRight(arr2, size2, k2);

    printf("Array 2 after right rotation by %d positions: ", k2);
    printArray(arr2, size2);

    return 0;
}