// Write a C program to count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int arr[100]; 
    int n;        
    int evenCount = 0; 
    int oddCount = 0;  

   
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
       
       
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++; 
        }
    }

   
    printf("\nTotal Even numbers: %d\n", evenCount);
    printf("Total Odd numbers: %d\n", oddCount);

    return 0; 
}