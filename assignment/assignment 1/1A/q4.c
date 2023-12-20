#include <stdio.h>
#include <time.h>
int main() {
    int dividend, divisor, remainder;

    // Read the dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Calculate the remainder
    remainder = dividend % divisor;

    // Display the result
    printf("Remainder: %d\n", remainder);
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    return 0;
}
