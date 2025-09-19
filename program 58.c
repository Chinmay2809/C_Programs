// Write a C program to find the maximum and minimum element in an array.

#include <stdio.h> 

int main() {
    int arr[100]; 
    int n;       
    int i;        
    int max;      
    int min;     

   
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    max = arr[0];
    min = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }

        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

  
    printf("\nMaximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0; 
}