// Write a C program to store details of 5 students in an array of structures and print all.

#include <stdio.h> 

struct Student {
    char name[50]; 
    int rollNumber; 
    float marks;    
};

int main() {
    struct Student students[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1); 
        
        printf("Name: "); 
        
        scanf("%s", students[i].name); 

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber); 

        printf("Marks: ");
        scanf("%f", &students[i].marks); 
        printf("\n"); 
    }

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks); 
        printf("-----------------------\n"); 
    }

    return 0; 
}