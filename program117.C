// Write a C program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n; 

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m]; 
    printf("Enter the elements of the first array (in sorted order):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n]; 
    printf("Enter the elements of the second array (in sorted order):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArr[m + n]; 
    int i = 0, j = 0, k = 0; 

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }

    printf("The merged and sorted array is:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", mergedArr[x]);
    }
    printf("\n");

    return 0;
}