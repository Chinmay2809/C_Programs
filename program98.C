// Write a C program to print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;
    char lastWord[50];

    printf("Enter your full name: ");

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0'; 

    word = strtok(name, " ");

    while (word != NULL) {

        strcpy(lastWord, word);   

        word = strtok(NULL, " ");

        if (word != NULL) {     
             
            printf("%c. ", lastWord[0]);
        }
    }

    printf("%s\n", lastWord);

    return 0;
}
