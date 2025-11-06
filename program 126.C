// Write a C program to ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h> 
#include <stdlib.h> 

int main() {
    FILE *filePointer; 
    char filename[100];
    int character; 

    printf("Enter the name of the file: ");
    scanf("%s", filename); 

    filePointer = fopen(filename, "r");

    if (filePointer == NULL) {
        printf("Error: The file '%s' could not be opened or does not exist.\n", filename);
     
    } else {
        printf("\nContent of '%s':\n", filename);
 
        while ((character = fgetc(filePointer)) != EOF) {
            putchar(character); 
        }
        printf("\n"); 

       
        fclose(filePointer);
    }

    return 0; 
}