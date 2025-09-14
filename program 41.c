// Write a C program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h> 

int main() {
    int num, firstDigit, lastDigit, digitsCount, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num >= 0 && num < 10) {
        printf("The number after swapping first and last digit: %d\n", num);
        return 0;
    }

   
    lastDigit = num % 10;

    
    digitsCount = (int)log10(num);

   
   
    firstDigit = (int)(num / pow(10, digitsCount));

   
   
    swappedNum = lastDigit;

  
    swappedNum *= (int)round(pow(10, digitsCount));

   
    swappedNum += num % ((int)round(pow(10, digitsCount)));

   
    swappedNum -= lastDigit;

    swappedNum += firstDigit;

    printf("The number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}