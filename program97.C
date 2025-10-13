// Write a C program to print the initials of a name.


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    printf("The initials are: ");

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    for (i = 1; i < strlen(name); i++) {

        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            printf("%c", name[i+1]);
        }
    }

    printf("\n");
    return 0;
}
