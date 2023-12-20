#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Read temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the temperature in Celsius
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}

