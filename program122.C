// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h> 

int main() {
    FILE *filePointer; 
    char buffer[256];  

    filePointer = fopen("info.txt", "r");

   
    if (filePointer == NULL) {
        printf("Error: Could not open the file 'info.txt'. Please ensure it exists in the same directory as the program.\n");
        return 1;
    }

    printf("Contents of 'info.txt':\n");

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer); 
    }

 
    fclose(filePointer);

    return 0; 
}