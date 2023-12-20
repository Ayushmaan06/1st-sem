#include <stdio.h>
#include <time.h>

int main() {
    int monthNumber;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    // Read the month number from the user
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Print the month name based on the month number
    switch (monthNumber) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number\n");
    }

    return 0;
}
