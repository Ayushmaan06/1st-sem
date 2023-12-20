#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    firstDigit = num;

    int sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
