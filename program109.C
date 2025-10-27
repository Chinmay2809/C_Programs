// Write a C program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int findMaxSumSubarray(int arr[], int n, int k) {
    
    if (n < k || k <= 0) {
        printf("Error: Invalid array size or subarray size k.\n");
        return -1; 
    }

    int maxSum = 0;
    int currentSum = 0; 

    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    maxSum = currentSum; 

    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum; 
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 

    int result = findMaxSumSubarray(arr, n, k);

    if (result != -1) { 
        printf("The maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    // Another example
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;
    result = findMaxSumSubarray(arr2, n2, k2);
    if (result != -1) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k2, result);
    }

    return 0; 
}