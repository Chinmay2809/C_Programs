// Write a C program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h> 
#include <ctype.h>  

int main() {
    char sentence[100]; 
    int i;
    int new_sentence = 1; 

    printf("Enter a sentence: ");
   
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        if (new_sentence && isalpha(sentence[i])) {
  
            sentence[i] = toupper(sentence[i]);
            new_sentence = 0; 
        } else if (isalpha(sentence[i])) {
 
            sentence[i] = tolower(sentence[i]);
        }

 
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            new_sentence = 1;
        }
    }

    printf("Sentence case: %s\n", sentence);

    return 0;
}