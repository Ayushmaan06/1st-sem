#include <stdio.h>

int main() {
    double u, a, t, v, s;

    // Read initial velocity, acceleration, and time from the user
    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);

    printf("Enter acceleration (a): ");
    scanf("%lf", &a);

    printf("Enter time (t): ");
    scanf("%lf", &t);

    // Calculate final velocity and distance
    v = u + (a * t);
    s = u * t + (0.5 * a * t * t);

    // Display the results
    printf("Final velocity (v): %.2lf\n", v);
    printf("Distance traversed (s): %.2lf\n", s);

    return 0;
}
