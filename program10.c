// Write a C program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    
    int totalSeconds, hours, minutes, seconds;

    printf("Enter the time in seconds: ");
    
    scanf("%d", &totalSeconds);

   
    
    
    hours = totalSeconds / 3600;

    int remainingSeconds = totalSeconds % 3600;
    
    minutes = remainingSeconds / 60;
    
    seconds = remainingSeconds % 60;
    

    printf("\nTime in HH:MM:SS format is: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}


