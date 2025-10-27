// Write a C program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceil_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] >= x) {
            ceil_index = mid; 
            high = mid - 1;   
        }
        else {
            low = mid + 1;
        }
    }
    return ceil_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 8; 

    int index = findCeil(arr, n, x);

    if (index != -1) {
        printf("The ceil of %d is at index: %d (value: %d)\n", x, index, arr[index]);
    } else {
        printf("No ceil found for %d in the array.\n", x);
    }

    x = 0;
    index = findCeil(arr, n, x);
    printf("The ceil of %d is at index: %d (value: %d)\n", x, index, arr[index]);

    x = 11;
    index = findCeil(arr, n, x);
    printf("The ceil of %d is at index: %d (value: %d)\n", x, index, arr[index]);

    x = 20;
    index = findCeil(arr, n, x);
    if (index != -1) {
        printf("The ceil of %d is at index: %d (value: %d)\n", x, index, arr[index]);
    } else {
        printf("No ceil found for %d in the array.\n", x);
    }

    return 0;
}