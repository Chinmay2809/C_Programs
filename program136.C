// Write a C program to use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum MenuChoice {
    ADD = 1,      
    SUBTRACT,     
    MULTIPLY      
};

int main() {
    int num1, num2;
    enum MenuChoice choice;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\n--- Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", (int*)&choice); 

    switch (choice) {
        case ADD:
            printf("Result of addition: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case SUBTRACT:
            printf("Result of subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case MULTIPLY:
            printf("Result of multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}