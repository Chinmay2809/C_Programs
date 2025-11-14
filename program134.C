// Write a C program to define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

/**
 * @brief 
 */
typedef enum {
    SUCCESS,  
    FAILURE,  
    TIMEOUT  
} OperationStatus;

/**
 * @brief 
 *
 * @param status 
 */
void printStatusMessage(OperationStatus status) {
    switch (status) {
        case SUCCESS:
            printf("Operation successful!\n");
            break; 
        case FAILURE:
            printf("Operation failed!\n");
            break;
        case TIMEOUT:
            printf("Operation timed out!\n");
            break;
        
        default:
            printf("Unknown status.\n");
            break;
    }
}

int main() {
    OperationStatus status1 = SUCCESS;
    OperationStatus status2 = FAILURE;
    OperationStatus status3 = TIMEOUT;

    printf("--- Testing Status Messages ---\n");
    
    printf("Status 1: ");
    printStatusMessage(status1);

    printf("Status 2: ");
    printStatusMessage(status2);
    
    printf("Status 3: ");
    printStatusMessage(status3);

    return 0;
}
