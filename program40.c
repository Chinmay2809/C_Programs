// Write a C program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h> 

int main() {
    char binaryNumber[100]; 
    char onesComplement[100]; 
    int i;
    int length; 

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    length = strlen(binaryNumber); 

   
    for (i = 0; i < length; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0'; 
        } else {
            printf("Error: Invalid binary digit entered!\n");
            return 1;
        }
    }

    onesComplement[length] = '\0'; 

    printf("Original binary number: %s\n", binaryNumber);
    printf("1's complement: %s\n", onesComplement);

    return 0; 
}