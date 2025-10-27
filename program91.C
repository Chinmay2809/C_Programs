// Write a C program to remove all vowels from a string.

#include <stdio.h> 
#include <string.h>

int isVowel(char ch) {

    char lower_ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch; 

    if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char originalString[100]; 
    char newString[100];     
    int i, j = 0;          

    printf("Enter a string: ");
 
    fgets(originalString, sizeof(originalString), stdin); 

    originalString[strcspn(originalString, "\n")] = 0;

    for (i = 0; originalString[i] != '\0'; i++) {

        if (!isVowel(originalString[i])) {
            newString[j] = originalString[i];
            j++; 
        }
    }
    newString[j] = '\0';

    printf("String after removing vowels: %s\n", newString);

    return 0;
}