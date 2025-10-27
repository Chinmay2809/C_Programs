// Write a C program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areAnagrams(char *s, char *t) {
    int count1[26] = {0}; 
    int count2[26] = {0}; 
    int i;

    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        return 0; 
    }

    for (i = 0; i < len_s; i++) {
        count1[s[i] - 'a']++; 
    }

    for (i = 0; i < len_t; i++) {
        count2[t[i] - 'a']++; 
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char s[100]; 
    char t[100]; 

    printf("Enter the first string (lowercase): ");
    scanf("%s", s); 

    printf("Enter the second string (lowercase): ");
    scanf("%s", t); 

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}