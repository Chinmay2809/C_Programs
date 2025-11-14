// Write a C program to define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

int main() {
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight currentLight = RED;

    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break; 

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid light value\n");
    }

    return 0; 
}
