// Write a C program to insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100]; 
    int current_size; 
    int element_to_insert;
    int position_to_insert;
    int i;

    printf("Enter the number of elements in the array (max 99): ");
    scanf("%d", &current_size);


    printf("Enter %d elements:\n", current_size);
    for (i = 0; i < current_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element_to_insert);
    printf("Enter the position (1-indexed) to insert the element: ");
    scanf("%d", &position_to_insert);


    int actual_index = position_to_insert - 1;


    if (actual_index < 0 || actual_index > current_size) {
        printf("Invalid position for insertion.\n");
    } else {

        for (i = current_size; i > actual_index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[actual_index] = element_to_insert;

        current_size++;


        printf("Array after insertion:\n");
        for (i = 0; i < current_size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}