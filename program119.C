// Write a C program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the array elements (only one element will be repeated):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int repeated_element = 0;
    for (int i = 0; i < n; i++) {
        repeated_element ^= arr[i];
    }

    
    for (int i = 1; i <= n - 1; i++) {
        repeated_element ^= i;
    }

    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}