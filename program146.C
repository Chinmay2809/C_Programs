// Write a C program to create Employee structure with nested Date structure for joining date and print details

#include <stdio.h>
#include <string.h> 

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int employeeId;
    char name[50];
    float salary;
    struct Date joiningDate; 
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.employeeId);

    while (getchar() != '\n'); 

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; 

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.employeeId);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}