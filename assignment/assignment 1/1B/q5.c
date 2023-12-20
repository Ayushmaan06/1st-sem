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

    // Check if the number is divisible by 5 and 11
    if (number % 5 == 0 && number % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", number);
    }

    return 0;
}
