// Write a C program to count positive, negative, and zero elements in an array.

#include <stdio.h> 

int main() {
    int size; 
    printf("Enter the size of the array: ");
    scanf("%d", &size); 

    int arr[size]; 
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); 
    }

    int positive_count = 0; 
    int negative_count = 0; 
    int zero_count = 0;     

    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++; 
        } else if (arr[i] < 0) {
            negative_count++; 
        } else {
            zero_count++;     
        }
    }

   
    printf("\nCounts:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0; 
}