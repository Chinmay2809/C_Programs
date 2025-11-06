// Write a C program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h> 
#include <ctype.h> 

int main() {
    FILE *inputFile;  
    FILE *outputFile; 
    char character;   

    
    inputFile = fopen("input.txt", "r");

  
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1; 
    }

   
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile); 
        return 1; 
    }

    while ((character = fgetc(inputFile)) != EOF) {
    
        char upperChar = toupper(character);

        fputc(upperChar, outputFile);
    }

  
    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted to uppercase and saved to output.txt\n");

    return 0; 
}