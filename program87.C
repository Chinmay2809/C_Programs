// Write a C program to count spaces, digits, and special characters in a string.

#include <stdio.h> 
#include <ctype.h> 

int main() {
    char str[100]; 
    int spaces = 0; 
    int digits = 0; 
    int specialChars = 0; 
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            spaces++; 
        } else if (isdigit(str[i])) { 
            digits++; 
        } else if (str[i] != '\n') { 
            specialChars++; 
        }
        i++; 
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0; 
}