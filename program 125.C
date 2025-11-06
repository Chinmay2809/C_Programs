// Write a C program to open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main() {
    FILE *filePointer; 
    char newLine[100]; 
    char filename[] = "my_text_file.txt"; 

   
    filePointer = fopen(filename, "a");

   
    if (filePointer == NULL) {
        printf("Error: Could not open the file '%s'.\n", filename);
        exit(1); 
    }

    printf("Enter a new line of text to append to '%s':\n", filename);
   
    fgets(newLine, sizeof(newLine), stdin);

   
    fprintf(filePointer, "%s", newLine);

 
    fclose(filePointer);

    printf("Successfully appended the new line to '%s'.\n", filename);

    return 0; 
}