// Write a C program to reverse an array without taking extra space.

#include <stdio.h> 


void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;


    while (start < end) {
       
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 

      
        start++; 
        end--; 
    }
}

int main() {
   
    int myArray[] = {1, 2, 3, 4, 5, 6};
   
    int n = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

 
    reverseArray(myArray, n);

   
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0; 
}