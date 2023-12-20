#include <stdio.h>
#include <time.h>

int main() {
    int number;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    // Read a number from the user (1-3)
    printf("Enter a number (1-3): ");
    scanf("%d", &number);

    // Print the word for the number using a switch statement
    switch (number) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        default: printf("Invalid number\n");
    }

    return 0;
}
