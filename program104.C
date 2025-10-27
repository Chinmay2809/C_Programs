// Write a C program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        long long sum_left = 0; 
        for (int i = 1; i <= x; i++) {
            sum_left += i;
        }

        long long sum_right = 0; 
        for (int i = x + 1; i <= n; i++) {
            sum_right += i;
        }

        if (sum_left == sum_right) {
            pivot = x; 
            break;     
        }
    }

    printf("%d\n", pivot);

    return 0;
}