// Write C a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf;

  
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    
    int original_num1 = num1;
    int original_num2 = num2;

   
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    hcf = num1;

    printf("HCF of %d and %d is %d\n", original_num1, original_num2, hcf);

    return 0;
}