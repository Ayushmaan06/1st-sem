#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    while (1) {
        printf("\nEnter an operation (+, -, *, /, %%, q to quit): ");
        scanf(" %c", &operation);

        if (operation == 'q' || operation == 'Q') {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case '%':
                if (num2 != 0) {
                    result = (int)num1 % (int)num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Modulo by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation. Try again.\n");
        }
    }

    return 0;
}
