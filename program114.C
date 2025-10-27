// Write a C program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h> 
#include <stdbool.h> 

int main() {
    char s[100]; 
    printf("Enter a string: ");
    scanf("%s", s); 

    int n = strlen(s); 
    int maxLength = 0; 
    int left = 0; 
    int right = 0; 
    bool visited[256] = {false}; 

    while (right < n) {
        
        if (!visited[s[right]]) {
            visited[s[right]] = true; 
            maxLength = (maxLength > (right - left + 1)) ? maxLength : (right - left + 1)
            right++; 
        } else {
    
            visited[s[left]] = false; 
            left++; 
        }
    }

    printf("The length of the longest substring without repeating characters is: %d\n", maxLength);

    return 0;
}