// Write a C program to count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100]; 
    int count = 0; 

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin); 

    while (str[count] != '\0') {
 
        if (str[count] == '\n') {
            break;
        }
        count++; 
    }

    printf("The length of the string is: %d\n", count);

    return 0; 
}