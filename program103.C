// Write a C program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    long long totalSum = 0; 
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < size; i++) {
        long long rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i; 
        }
        leftSum += arr[i]; 
    }

    return -1; 
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("-1\n"); 
        return 0;
    }

    int arr[size]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pivot = findPivotIndex(arr, size);
    printf("%d\n", pivot);

    return 0;
}