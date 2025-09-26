// Write a C program to find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 5, 8, 20, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]); 


    if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1; 
    }

    int largest = INT_MIN;      
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {

            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
 
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no distinct second largest element (e.g., all elements are the same).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}     