#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    double radius, area, circumference;
    const double PI = 3.14159265;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);

    return 0;
}
