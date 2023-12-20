#include <stdio.h>
#include <time.h>

int main() {
    
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    double basicSalary, hra, da, tax, grossSalary, deduction;

    printf("Enter Basic Salary: ");
    scanf("%lf", &basicSalary);

    printf("Enter HRA: ");
    scanf("%lf", &hra);

    printf("Enter DA: ");
    scanf("%lf", &da);

    printf("Enter Tax: ");
    scanf("%lf", &tax);

    deduction = hra + da + tax;
    grossSalary = basicSalary - deduction;

    printf("Gross Salary: %.2lf\n", grossSalary);

    return 0;
}
