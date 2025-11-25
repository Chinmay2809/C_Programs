// Write a C program to create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h> 


enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {

    enum UserRole currentUserRole = USER; 

    switch (currentUserRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break; 
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default: 
            printf("Unknown user role.\n");
            break;
    }

    currentUserRole = ADMIN;
    printf("\nChanging role to ADMIN...\n");
    switch (currentUserRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default:
            printf("Unknown user role.\n");
            break;
    }

    return 0; 
}