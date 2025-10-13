// Write a C program to find the first repeating lowercase alphabet in a string.


#include <stdio.h>
#include <string.h> 

int main() {
    char str[100]; 
    printf("Enter a string: ");
    scanf("%s", str); 

    int found = 0; 

    for (int i = 0; i < strlen(str); i++) {
  
        if (str[i] >= 'a' && str[i] <= 'z') {

            for (int j = i + 1; j < strlen(str); j++) {
                if (str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c\n", str[i]);
                    found = 1; 
                    break;     
                }
            }
        }
        if (found) {
            break; 
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0; 
}