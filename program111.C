// Write a C program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

void findFirstNegative(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; 

        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]); 
                firstNegative = 1;         
                break;                     
            }
        }

        if (firstNegative == 0) {
            printf("0 ");
        }
    }
    printf("\n"); 
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Subarray size (k): %d\n", k);
    printf("First negative integers in each window: ");
    findFirstNegative(arr, n, k);

    int arr2[] = {1, 2, 3, 4, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;

    printf("\nArray: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Subarray size (k): %d\n", k2);
    printf("First negative integers in each window: ");
    findFirstNegative(arr2, n2, k2);

    return 0;
}