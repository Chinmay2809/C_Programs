// Write a C program to find the digit that occurs the most times in an integer number.

#include <stdio.h> 

int main() {
    int number; 
    int counts[10] = {0}; 
    int digit; 
    int maxCount = 0; 
    int mostFrequentDigit = 0; 


    printf("Enter an integer number: ");
    scanf("%d", &number);

 
    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        counts[0]++;
    } else {

        while (number > 0) {
            digit = number % 10; 
            counts[digit]++; 
            number /= 10; 
        }
    }


    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i]; 
            mostFrequentDigit = i; 
        }
    }


    printf("The digit that occurs most frequently is: %d\n", mostFrequentDigit);

    return 0;
}