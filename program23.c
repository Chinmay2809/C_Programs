// Write a C program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.


#include <stdio.h>

int main() {
    int days_late;
    float fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);

    if (days_late > 30) {
        printf("Membership Cancelled due to more than 30 days late.\n");
    } else if (days_late > 0) {
        if (days_late <= 5) {
            fine = days_late * 2.0;
        } else if (days_late <= 10) { 
            fine = (5 * 2.0) + ((days_late - 5) * 4.0);
        } else if (days_late <= 30) { 
            fine = (5 * 2.0) + (5 * 4.0) + ((days_late - 10) * 6.0);
        }
        printf("The fine for %d days late is ₹%.2f\n", days_late, fine);
    } else {
        printf("No fine. The book was returned on time or early.\n");
    }

    return 0;
}
