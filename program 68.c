// Write a C program to delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100];
    int size;     
    int position; 
    int i;        

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) of the element to delete: ", size);
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size);
    } else {

        for (i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}