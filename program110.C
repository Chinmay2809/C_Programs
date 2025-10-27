// Write a C program to take an integer array arr and an integer k as input. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as input. 

#include <stdio.h> 

void printKMax(int arr[], int n, int k) {

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int n, k; 

    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    int arr[n]; 

    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Enter the window size (k): ");
    scanf("%d", &k); 

    if (k > n || k <= 0) {
        printf("Invalid window size. K must be between 1 and %d.\n", n);
        return 1;
    }

    printf("Maximum elements in each window of size %d:\n", k);
    printKMax(arr, n, k);

    return 0; 
}