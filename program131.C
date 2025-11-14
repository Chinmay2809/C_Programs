// Write a C program to create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

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

int main() {
    enum Day currentDay;

    for (currentDay = SUNDAY; currentDay <= SATURDAY; currentDay++) {
        switch (currentDay) {
            case SUNDAY:
                printf("Day: SUNDAY, Integer Value: %d\n", currentDay);
                break;
            case MONDAY:
                printf("Day: MONDAY, Integer Value: %d\n", currentDay);
                break;
            case TUESDAY:
                printf("Day: TUESDAY, Integer Value: %d\n", currentDay);
                break;
            case WEDNESDAY:
                printf("Day: WEDNESDAY, Integer Value: %d\n", currentDay);
                break;
            case THURSDAY:
                printf("Day: THURSDAY, Integer Value: %d\n", currentDay);
                break;
            case FRIDAY:
                printf("Day: FRIDAY, Integer Value: %d\n", currentDay);
                break;
            case SATURDAY:
                printf("Day: SATURDAY, Integer Value: %d\n", currentDay);
                break;
            default:
                printf("Unknown Day\n");
                break;
        }
    }

    return 0;
}