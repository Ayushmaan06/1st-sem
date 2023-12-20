#include <stdio.h>

int main() {
    double num1, num2;

    int n1,n2;
    // Read two numbers from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculate and display the results
    printf("Sum: %.2lf\n", num1 + num2);
    printf("Product: %.2lf\n", num1 * num2);
    printf("Difference: %.2lf\n", num1 - num2);
    n1=(int)num1;
    n2=(int)num2;
    if (num2 != 0) {
       
        printf("Quotient: %d\n", n1 / n2);
        printf("Remainder: %d\n", (n1 % n2));
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
