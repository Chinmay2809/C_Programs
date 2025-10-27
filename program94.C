// Write a C program to find the longest word in a sentence.

#include <stdio.h>
#include <string.h> 

#define MAX_SENTENCE_LENGTH 1000 
#define MAX_WORD_LENGTH 100    

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    char currentWord[MAX_WORD_LENGTH];
    char longestWord[MAX_WORD_LENGTH];

    int i = 0; 
    int j = 0; 
    int maxLen = 0; 

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    sentence[strcspn(sentence, "\n")] = 0;

    longestWord[0] = '\0'; 

    while (sentence[i] != '\0') {
 
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            currentWord[j] = sentence[i];
            j++;
        } else {
 
            currentWord[j] = '\0'; 

            if (strlen(currentWord) > maxLen) {
                maxLen = strlen(currentWord);
                strcpy(longestWord, currentWord); 
            }
            j = 0; 
        }
        i++;
    }

    currentWord[j] = '\0'; 
    if (strlen(currentWord) > maxLen) {
        maxLen = strlen(currentWord);
        strcpy(longestWord, currentWord);
    }

    printf("The longest word is: %s\n", longestWord);
    printf("Its length is: %d\n", maxLen);

    return 0;
}