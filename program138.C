// Write a C program to print all enum names and integer values using a loop.

#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    NUM_DAYS 
};

const char *dayNames[] = {
    "SUNDAY",
    "MONDAY",
    "TUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
};

int main() {
    printf("Enum Day Names and Values:\n");

    for (enum Day d = SUNDAY; d < NUM_DAYS; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}