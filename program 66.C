// Write a C program to insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100];
    int n;        
    int element;  
    int i, j;   

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the sorted elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; 
    }

    arr[i + 1] = element; 
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}