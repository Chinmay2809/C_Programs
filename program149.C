// Write a C program to use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student *sPtr;

    sPtr = (struct Student *) malloc(sizeof(struct Student));

    if (sPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }

    printf("Enter student name: ");
    scanf("%s", sPtr->name); 

    printf("Enter roll number: ");
    scanf("%d", &sPtr->rollNumber);

    printf("Enter marks: ");
    scanf("%f", &sPtr->marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", sPtr->name);
    printf("Roll Number: %d\n", sPtr->rollNumber);
    printf("Marks: %.2f\n", sPtr->marks);

    free(sPtr);
    sPtr = NULL; 

    return 0; 
}