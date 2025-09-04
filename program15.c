// Write a C program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h> 

int main() {
    char ch;

   
    printf("Enter a character: ");
    

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an uppercase alphabet.\n", ch);
    }
    
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase alphabet.\n", ch);
    }
    
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    }
    
    else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}