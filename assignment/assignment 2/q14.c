#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    double a, b, c, x1, x2, discriminant;

    printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real and distinct roots:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        x1 = -b / (2 * a);
        printf("One real root (repeated):\n");
        printf("x1 = x2 = %.2lf\n", x1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots:\n");
        printf("x1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
