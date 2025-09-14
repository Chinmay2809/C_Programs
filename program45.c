// Write a C program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    int numerator = 2;
    int denominator = 3;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (double)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("The sum of the series up to %d terms is: %.2lf\n", n, sum);

    return 0;
}
