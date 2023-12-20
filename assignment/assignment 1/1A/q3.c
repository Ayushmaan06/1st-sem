#include <stdio.h>
#include <time.h>
int main() {
    double principal, rate, ti, simple_interest;

    // Read principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time period (in years): ");
    scanf("%lf", &ti);

    // Calculate simple interest
    simple_interest = (principal * rate * ti) / 100.0;

    // Display the result
    printf("Simple Interest: %.2lf\n", simple_interest);

    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    
    return 0;
}
