// Write a C program to read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>  

int main() {
    FILE *file_pointer;
    char file_name[100];
    char character;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0; 

   
    printf("Enter the name of the text file: ");
    scanf("%s", file_name);

 
    file_pointer = fopen(file_name, "r");

  
    if (file_pointer == NULL) {
        printf("Error: Could not open file %s\n", file_name);
        exit(EXIT_FAILURE); 
    }

    
    while ((character = fgetc(file_pointer)) != EOF) {
        characters++; 

   
        if (character == '\n') {
            lines++;
        }

      
        if (isspace(character)) {
            in_word = 0; 
        } else if (in_word == 0) {
            words++;     
            in_word = 1; 
        }
    }

   
    if (characters > 0 && lines == 0) { 
        lines = 1;
    }
   
    fclose(file_pointer);

   s
    printf("\nFile Analysis for '%s':\n", file_name);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}