// Write a C program to find and print the student with the highest marks.

#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50]; 
    int marks;     
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        while (getchar() != '\n'); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    int highestMarks = -1;
    int topperIndex = -1;  

    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }

    if (topperIndex != -1) {
        printf("\nStudent with the highest marks:\n");
        printf("Name: %s\n", students[topperIndex].name);
        printf("Marks: %d\n", students[topperIndex].marks);
    } else {
        printf("\nNo student data entered.\n");
    }

    return 0;
}