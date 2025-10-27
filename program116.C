// Write a C program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15}; 
    int target = 9;             
    int n = sizeof(nums) / sizeof(nums[0]); 

    int found_i = -1;
    int found_j = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (nums[i] + nums[j] == target) {
                found_i = i;
                found_j = j;
                break;
            }
        }
        if (found_i != -1) { 
            break;
        }
    }

    printf("%d %d\n", found_i, found_j);

    return 0;
}