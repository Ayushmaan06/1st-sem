#include <stdio.h>
#include <time.h>
int main() {
    int num1, num2;
    
    // Read two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    // Calculate and display the sum, difference, and multiplication
    int sum = num1 + num2;
    int difference = num1 - num2;
    int multiplication = num1 * num2;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Multiplication: %d\n", multiplication);
    
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    return 0;
}
