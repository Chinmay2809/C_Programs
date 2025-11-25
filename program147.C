// Write a C program to store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp1 = {101, "Alice Smith", 55000.00};
    struct Employee emp_read; 

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1); 
    }

    
    fwrite(&emp1, sizeof(struct Employee), 1, fp);

    printf("Employee data written to employees.dat\n");
 
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1); 
    }

    
    fread(&emp_read, sizeof(struct Employee), 1, fp);

    printf("\nEmployee data read from employees.dat:\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    fclose(fp);

    return 0; 
}