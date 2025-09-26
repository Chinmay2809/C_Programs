// Write a C program to merge two arrays.

#include <stdio.h> 

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size1, size2; 
    int i, j, k; 

  
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter elements for the first array:\n");
    for (i = 0; i < size1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

 
    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter elements for the second array:\n");
    for (i = 0; i < size2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

 
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    k = size1; 
    for (j = 0; j < size2; j++) {
        mergedArr[k] = arr2[j];
        k++;
    }


    printf("\nMerged Array: ");
    for (i = 0; i < (size1 + size2); i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0; 
}