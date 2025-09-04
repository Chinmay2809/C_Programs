// Write a C program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
       
        if (side1 == side2 && side2 == side3) {
            printf("This is an Equilateral Triangle.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("This is an Isosceles Triangle.\n");
        } else {
            printf("This is a Scalene Triangle.\n");
        }
    } else {
        printf("The entered side lengths do not form a valid triangle.\n");
    }

    return 0;
}