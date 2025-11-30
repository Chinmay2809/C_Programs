// Write a C program to take two structs as input and check if they are identical.
 
#include <stdio.h>
#include <string.h> 

struct Person {
    char name[50];
    int age;
    float height;
};

int arePersonsIdentical(struct Person p1, struct Person p2) {
    if (strcmp(p1.name, p2.name) != 0) {
        return 0; 
    }

    if (p1.age != p2.age) {
        return 0; 
    }

    if (p1.height != p2.height) {
        return 0; 
    }

    return 1; 
}

int main() {
    struct Person person1, person2;

    // Input for Person 1
    printf("Enter details for Person 1:\n");
    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    person1.name[strcspn(person1.name, "\n")] = 0
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Height (in meters): ");
    scanf("%f", &person1.height);

    while (getchar() != '\n'); 

    // Input for Person 2
    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    fgets(person2.name, sizeof(person2.name), stdin);
    person2.name[strcspn(person2.name, "\n")] = 0; 
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("Height (in meters): ");
    scanf("%f", &person2.height);

    if (arePersonsIdentical(person1, person2)) {
        printf("\nThe two persons are identical.\n");
    } else {
        printf("\nThe two persons are NOT identical.\n");
    }

    return 0;
}