// Write a C program to check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h> 


int areAnagrams(char *str1, char *str2) {
    int count1[256] = {0}; 
    int count2[256] = {0}; 
    int i;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0; 
    }

    for (i = 0; i < len1; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    for (i = 0; i < len2; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char string1[100];
    char string2[100];

    printf("Enter the first string: ");

    fgets(string1, sizeof(string1), stdin);

    string1[strcspn(string1, "\n")] = 0; 

    printf("Enter the second string: ");

    fgets(string2, sizeof(string2), stdin);

    string2[strcspn(string2, "\n")] = 0; 

    if (areAnagrams(string1, string2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", string1, string2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", string1, string2);
    }

    return 0;
}