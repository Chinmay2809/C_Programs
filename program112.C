// Write a C program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = INT_MIN; 
    int max_ending_here = 0;  
    int all_negative = 1;     
    int largest_negative = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            all_negative = 0;
        }

        largest_negative = max(largest_negative, arr[i]);

        max_ending_here += arr[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        max_so_far = max(max_so_far, max_ending_here);
    }

    if (all_negative == 1) {
        printf("The maximum sum (largest negative element) is: %d\n", largest_negative);
    } else {
        printf("The maximum contiguous subarray sum is: %d\n", max_so_far);
    }

    return 0;
}