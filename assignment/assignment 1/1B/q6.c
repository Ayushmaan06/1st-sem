#include <stdio.h>
#include <time.h>

int main() {
    int marks;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    // Read marks from the user
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Check the grade based on the marks
    if (marks < 50) {
        printf("Fail\n");
    } else if (marks >= 50 && marks < 60) {
        printf("D grade\n");
    } else if (marks >= 60 && marks < 70) {
        printf("C grade\n");
    } else if (marks >= 70 && marks < 80) {
        printf("B grade\n");
    } else if (marks >= 80 && marks < 90) {
        printf("A grade\n");
    } else if (marks >= 90 && marks <= 100) {
        printf("A+ grade\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}
