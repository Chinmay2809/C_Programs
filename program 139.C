// Write a C program to show that enums store integers by printing assigned values.

#include <stdio.h>

enum Day {
    SUNDAY,   
    MONDAY,    
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY,  
    FRIDAY,    
    SATURDAY   
};

enum Color {
    RED = 10,
    GREEN = 20,
    BLUE = 30,
    YELLOW 
};

int main() {
    printf("Values of Day enum constants:\n");
    printf("SUNDAY: %d\n", SUNDAY);
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);

    printf("\n"); 

    printf("Values of Color enum constants:\n");
    printf("RED: %d\n", RED);
    printf("GREEN: %d\n", GREEN);
    printf("BLUE: %d\n", BLUE);
    printf("YELLOW: %d\n", YELLOW);

    int favoriteDay = MONDAY;
    printf("\nMy favorite day (MONDAY) as an integer: %d\n", favoriteDay);

    enum Day unknownDay = 99; 
    printf("An 'unknownDay' enum variable assigned an integer 99: %d\n", unknownDay);

    return 0;
}