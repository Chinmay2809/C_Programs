// Write a C program to replace spaces with hyphens in a string.

#include <stdio.h> 
#include <string.h> 

int main() {
    char str[100]; 
   

    printf("Enter a string: "); 

    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = 0; 

    for (int i = 0; i < strlen(str); i++) {
  
        if (str[i] == ' ') {
            str[i] = '-'; 
        }
    }

    printf("Modified string: %s\n", str); 

    return 0; 
}