// Write a C program to return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50];
    int roll_number;
    float marks;
};


struct Student getTopStudentDetails() {
    struct Student topStudent; 

    strcpy(topStudent.name, "Alice Smith"); 
    topStudent.roll_number = 101;
    topStudent.marks = 95.5;

    return topStudent; 
}

int main() {
    struct Student bestStudent = getTopStudentDetails();

    printf("Top Student Details:\n");
    printf("Name: %s\n", bestStudent.name);
    printf("Roll Number: %d\n", bestStudent.roll_number);
    printf("Marks: %.2f\n", bestStudent.marks);

    return 0;
}