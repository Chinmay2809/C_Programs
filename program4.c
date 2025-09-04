// Write a C program to calculate the area and circumference of a circle given its radius.

#include <stdio.h> 

int main() {
    
    float radius;     
    float area;         
    float circumference; 

    
    const float PI = 3.14; 

   
    printf("Enter the radius of the circle: ");

   
    scanf("%f", &radius);

    
    area = PI * radius * radius;

    
    circumference = 2 * PI * radius;

   
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

   
    return 0;
}