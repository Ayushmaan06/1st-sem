#include <stdio.h>
#include <time.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number before reversing it

    for (; num > 0; num = num / 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if (reversedNum == originalNum) {
        printf("Palindrome\n");
    } else {
        printf("NOT Palindrome\n");
    }

    return 0;
}
