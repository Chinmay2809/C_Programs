// Write a C program to print each character of a string on a new line.

#include <stdio.h> 

int main() {
    char str[100]; 

    printf("Enter a string: "); 
    scanf("%s", str); 

    printf("Characters of the string on new lines:\n");

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]); 
    }

    return 0; 
}