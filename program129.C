// Write a C program for file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h> 

int main() {
    FILE *file_ptr; 
    long long sum = 0;
    int count = 0;     
    int number;        
    double average;    

    file_ptr = fopen("numbers.txt", "r");

    
    if (file_ptr == NULL) {
        printf("Error: Could not open the file numbers.txt\n");
        return 1; 
    }

    while (fscanf(file_ptr, "%d", &number) == 1) {
        sum += number; 
        count++;      
    }

    fclose(file_ptr);

    if (count > 0) {
        average = (double)sum / count; 
        printf("Sum of integers: %lld\n", sum);
        printf("Average of integers: %.2f\n", average);
    } else {
        printf("No integers found in the file numbers.txt\n");
    }

    return 0; 
}