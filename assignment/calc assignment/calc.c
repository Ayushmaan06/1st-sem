#include <stdio.h>
#include <math.h>

int main() {
    char fx;
    int n;
     printf("enter '+' for addition\n");
    printf("enter '-' for subtraction\n");
    printf("enter '*' for multiplication\n");
    printf("enter '/' for division\n");
    printf("enter 'r' for finding remainder\n");
    printf("enter '%%' for finding percentage\n");
    printf("enter '!' for finding factorial\n");
    printf("enter 'e' for finding natural log\n");
    printf("enter 'l' for finding log to the base 10\n");
    printf("enter 'x' for finding exponential power\n");
    printf("enter '^' for power function\n");
    printf("enter 't' for trignometric function\n");
    printf("enter 'i' for inverse trignometric function\n");
    printf("enter 'q' for finding soln of quadratic equation\n");
    printf("enter 'c' for finding soln of cubic eqn of type x^3 + ax^2 + bx + c \n");


    scanf("   %c", &fx); 

    int sum, sub, mul, divd, divs, dividend, divisor, remainder, percent, total, result, num, fact, base, exponent;
    double x, logx, exp_x, deg, rad, inv_x, asin_result, acos_result, atan_result, pow_res;

    switch (fx) {
        case '+':
            sum = 0;
            printf("Enter the number of values to add: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                int num;
                printf("Enter number to be added: ");
                scanf("%d", &num);
                sum += num;
            }
            printf("Sum is: %d\n", sum);
            break;
        case '-':
            sub = 0;
            printf("Enter the number of values to subtract: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                int num;
                printf("Enter number to be subtracted: ");
                scanf("%d", &num);
                sub -= num;
            }
            printf("Subtraction result is: %d\n", sub);
            break;
        case '*':
            mul = 1;
            printf("Enter the number of values to multiply: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                int num;
                printf("Enter number to be multiplied: ");
                scanf("%d", &num);
                mul *= num;
            }
            printf("Multiplication result is: %d\n", mul);
            break;
        case '/':
            divd = 1;
            printf("Enter dividend: ");
            scanf("%d", &dividend);
            printf("Enter divisor: ");
            scanf("%d", &divisor);
            if (divisor != 0) {
                int div = dividend / divisor;
                printf("Division result is: %d\n", div);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case 'r':
            printf("Enter dividend: ");
            scanf("%d", &dividend);
            printf("Enter divisor: ");
            scanf("%d", &divisor);
            remainder = dividend % divisor;
            printf("Remainder is: %d\n", remainder);
            break;
        case '%':
            printf("Enter the percentage: ");
            scanf("%d", &percent);
            printf("Enter the total number: ");
            scanf("%d", &total);
            result = (percent * total) / 100;
            printf("%d%% of %d is: %d\n", percent, total, result);
            break;
        case '!':
            fact = 1;
            printf("Enter the number whose factorial is needed: ");
            scanf("%d", &num);
            if (num < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                for (int i = 1; i <= num; i++) {
                    fact *= i;
                }
                printf("Factorial of %d is: %d\n", num, fact);
            }
            break;
        case 'e':
            printf("Enter a value for x: ");
            scanf("%lf", &x);
            if (x > 0) {
                double res = log(x);
                printf("ln(%lf) = %lf\n", x, res);
            } else {
                printf("Natural logarithm is undefined for non-positive numbers.\n");
            }
            break;
        case 'l':
            printf("Enter a value for x: ");
            scanf("%lf", &logx);
            if (logx > 0) {
                double res = log10(logx);
                printf("log10(%lf) = %lf\n", logx, res);
            } else {
                printf("Logarithm base 10 is undefined for non-positive numbers.\n");
            }
            break;
        case 'x':
            printf("Enter a value for x: ");
            scanf("%lf", &exp_x);
            double res_exp = exp(exp_x);
            printf("e^%lf = %lf\n", exp_x, res_exp);
            break;
        case '^':
            printf("Enter the base: ");
            scanf("%d", &base);
            printf("Enter the exponent: ");
            scanf("%d", &exponent);
            pow_res = pow(base, exponent);
            printf("%d^%d = %lf\n", base, exponent, pow_res);
            break;
        case 't':
            printf("Enter an angle in degrees: ");
            scanf("%lf", &deg);
            rad = deg * 3.14 / 180.0;
            double sin_value = sin(rad);
            double cos_value = cos(rad);
            double tan_value = tan(rad);
            printf("Sine(%lf degrees) = %lf\n", deg, sin_value);
            printf("Cosine(%lf degrees) = %lf\n", deg, cos_value);
            printf("Tangent(%lf degrees) = %lf\n", deg, tan_value);
            break;
        case 'i':
            printf("Enter a value for x (-1 to 1): ");
            scanf("%lf", &inv_x);
            if (inv_x >= -1.0 && inv_x <= 1.0) {
                asin_result = asin(inv_x);
                acos_result = acos(inv_x);
                atan_result = atan(inv_x);
                printf("asin(%lf) = %lf radians\n", inv_x, asin_result);
                printf("acos(%lf) = %lf radians\n", inv_x, acos_result);
                printf("atan(%lf) = %lf radians\n", inv_x, atan_result);
            } else {
                printf("Input value is not in the range [-1, 1]. Arcsine, arccosine, and arctangent are defined for values in this range.\n");
            }
            break;
        case 'q':
             double a, b, c, x1, x2, discriminant;
            printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
            printf("Enter a: ");
            scanf("%lf", &a);
            printf("Enter b: ");
            scanf("%lf", &b);
            printf("Enter c: ");
            scanf("%lf", &c);
            discriminant = b * b - 4 * a * c;
            if (discriminant > 0) {
                x1 = (-b + sqrt(discriminant)) / (2 * a);
                x2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("Two real and distinct roots:\n");
                printf("x1 = %.2lf\n", x1);
                printf("x2 = %.2lf\n", x2);
            } else if (discriminant == 0) {
                x1 = -b / (2 * a);
                printf("One real root (repeated):\n");
                printf("x1 = x2 = %.2lf\n", x1);
            } else {
                double realPart = -b / (2 * a);
                double imaginaryPart = sqrt(-discriminant) / (2 * a);
                printf("Complex roots:\n");
                printf("x1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
                printf("x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
            }

            break;
        case 'c':
            // Add code for cubic equation
            break;
        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}
