#include <stdio.h>
#include <time.h>

int main() {
    int number;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
