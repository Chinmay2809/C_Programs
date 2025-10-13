// Write a C program to reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseSegment(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char *sentence) {
    char *word_start = sentence; 
    char *temp = sentence;       

    while (*temp) {
   
        if (*temp == ' ' || *temp == '\0') {
 
            reverseSegment(word_start, temp - 1);
            word_start = temp + 1; 
        }
        temp++; 
    }
 
    reverseSegment(word_start, temp - 1);
}

int main() {
    char sentence[100]; 

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    sentence[strcspn(sentence, "\n")] = 0;

    printf("Original sentence: %s\n", sentence);

    reverseWordsInSentence(sentence); 

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}