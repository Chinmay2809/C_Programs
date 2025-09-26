// Write a C program to search for an element in an array using linear search.

#include <stdio.h> 

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

  
    int searchElement; 
    int foundIndex = -1; 
   

    printf("The array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    printf("Enter the element you want to search for: ");
    scanf("%d", &searchElement); 

  
    for (int i = 0; i < size; i++) { 
        if (arr[i] == searchElement) { 
            foundIndex = i; 
            break; 
        }
    }

 
    if (foundIndex != -1) { 
        printf("Element %d found at index %d.\n", searchElement, foundIndex);
    } else { 
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0; 
}