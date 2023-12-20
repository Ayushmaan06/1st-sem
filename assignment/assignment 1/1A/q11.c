#include <stdio.h>

int main() {
    int num1, num2;

    // Read two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Check if num1 is a multiple of num2
    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }

    return 0;
}
