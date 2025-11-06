// Write a C program to take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h> // 
#include <stdlib.h> // 

int main() {
    FILE *source_file_ptr, *destination_file_ptr; 
    char source_filename[100], destination_filename[100]; 
    int character; 

    
    printf("Enter the source filename: ");
    scanf("%s", source_filename);

    printf("Enter the destination filename: ");
    scanf("%s", destination_filename);

    source_file_ptr = fopen(source_filename, "r");

 
    if (source_file_ptr == NULL) {
        printf("Error: Could not open the source file '%s'.\n", source_filename);
        exit(EXIT_FAILURE); 
    }

    destination_file_ptr = fopen(destination_filename, "w");

   
    if (destination_file_ptr == NULL) {
        printf("Error: Could not open/create the destination file '%s'.\n", destination_filename);
        fclose(source_file_ptr); 
        exit(EXIT_FAILURE);
    }

    while ((character = fgetc(source_file_ptr)) != EOF) {
        fputc(character, destination_file_ptr); 
    }

  
    fclose(source_file_ptr);
    fclose(destination_file_ptr);

    printf("File contents copied successfully from '%s' to '%s'.\n", source_filename, destination_filename);

    return 0;
}