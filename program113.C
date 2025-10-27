// Write a C program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h> 
#include <stdlib.h>

int compareIntegers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integer elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k; 
    printf("Enter the value of k (to find the k-th smallest element): ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k. k must be between 1 and %d.\n", n);
        return 1; 
    }

    
    qsort(arr, n, sizeof(int), compareIntegers);

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0 ;
}