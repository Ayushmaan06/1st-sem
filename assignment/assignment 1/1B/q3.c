#include <stdio.h>
#include <time.h>

int main() {
    int age;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    // Read the person's age from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the person is eligible to vote (assuming the voting age is 18)
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

