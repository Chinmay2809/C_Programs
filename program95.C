// Write a C program to check if one string is a rotation of another.

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0; 
    }

    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    strcpy(temp, str1); 
    strcat(temp, str1); 

    if (strstr(temp, str2) != NULL) {
        free(temp); 
        return 1; 
    } else {
        free(temp); 
        return 0; 
    }
}

int main() {
    char s1[] = "waterbottle";
    char s2[] = "erbottlewat";

    if (areRotations(s1, s2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", s2, s1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s2, s1);
    }

    char s3[] = "hello";
    char s4[] = "world";

    if (areRotations(s3, s4)) {
        printf("\"%s\" is a rotation of \"%s\"\n", s4, s3);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s4, s3);
    }

    char s5[] = "abc";
    char s6[] = "bca";

    if (areRotations(s5, s6)) {
        printf("\"%s\" is a rotation of \"%s\"\n", s6, s5);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s6, s5);
    }

    return 0;
}