// Write a C program to Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n; 
    int i; 
   
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n); 

   
    int arr[n]; 

  
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    }


    printf("\nThe elements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
    return 0; 
}