// Write a C program to use pointer to struct to modify and display data using -> operator.

#include <stdio.h> 
#include <string.h> 

struct Student {
    char name[50]; 
    int rollNumber; 
    float marks;    
};

int main() {
    struct Student student1 = {"Alice", 101, 85.5};

    struct Student *studentPtr;

    studentPtr = &student1;

    printf("--- Initial Student Data ---\n");
    printf("Name: %s\n", studentPtr->name);
    printf("Roll Number: %d\n", studentPtr->rollNumber);
    printf("Marks: %.2f\n", studentPtr->marks);

    strcpy(studentPtr->name, "Bob"); 
    studentPtr->marks = 92.0;

    printf("\n--- Modified Student Data ---\n");
    printf("Name: %s\n", studentPtr->name);
    printf("Roll Number: %d\n", studentPtr->rollNumber);
    printf("Marks: %.2f\n", studentPtr->marks);

    return 0; 
}