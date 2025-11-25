// Write a C program to define a struct with enum Gender and print person's gender.

#include <stdio.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
} Gender;


typedef struct {
    char name[50];
    int age;
    Gender gender; 
} Person;

int main() {
    Person person1;

    sprintf(person1.name, "Alice");
    person1.age = 30;
    person1.gender = FEMALE; 


    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Gender value (integer): %d\n", person1.gender);

    
    printf("Gender (readable): ");
    switch (person1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        case UNKNOWN:
            printf("Unknown\n");
            break;
        default:
            printf("Undetermined\n");
            break;
    }

    return 0;
}
