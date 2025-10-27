// Write a C program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

void findFirstAndLastOccurrence(int nums[], int size, int target) {
    int firstOccurrence = -1;
    int lastOccurrence = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            firstOccurrence = i;
            break; 
        }
    }

    if (firstOccurrence != -1) {
        for (int i = size - 1; i >= 0; i--) {
            if (nums[i] == target) {
                lastOccurrence = i;
                break;
            }
        }
    }

    printf("First occurrence index: %d\n", firstOccurrence);
    printf("Last occurrence index: %d\n", lastOccurrence);
}

int main() {
    int nums[] = {1, 2, 3, 3, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target1 = 3;
    int target2 = 6;

    printf("For target %d:\n", target1);
    findFirstAndLastOccurrence(nums, size, target1);

    printf("\nFor target %d:\n", target2);
    findFirstAndLastOccurrence(nums, size, target2);

    return 0;
}