// Write C progtam to write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h> 


struct Student {
    int id;
    char name[50]; 
    float gpa;
};


void printStudentDetails(struct Student s) {
    printf("--- Student Details ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa); 
    printf("-----------------------\n");
}

int main() {
    struct Student student1;

    student1.id = 101;
    strcpy(student1.name, "Alice Smith");
    student1.gpa = 3.85;

    printStudentDetails(student1);

    struct Student student2;
    student2.id = 102;
    strcpy(student2.name, "Bob Johnson");
    student2.gpa = 3.20;

    printStudentDetails(student2);

    return 0;
}