// Write a C program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1; 

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2; 
    }

    printf("The sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}