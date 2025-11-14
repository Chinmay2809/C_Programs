// Write a C program to store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int numStudents, i;


    fptr = fopen("student_records.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1); 
    }

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s.name); 
        printf("Enter roll number: ");
        scanf("%d", &s.rollNumber);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fptr, "%s %d %.2f\n", s.name, s.rollNumber, s.marks);
    }

    fclose(fptr);
    printf("\nStudent records successfully written to student_records.txt\n");


    fptr = fopen("student_records.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Displaying Student Records from File ---\n");

   
    while (fscanf(fptr, "%s %d %f", s.name, &s.rollNumber, &s.marks) == 3) {
        printf("\nName: %s\n", s.name);
        printf("Roll Number: %d\n", s.rollNumber);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fptr);

    return 0;
}