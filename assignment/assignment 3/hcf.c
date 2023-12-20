#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2; // Find the smaller of the two numbers

    int hcf = 1; // Initialize HCF to 1

    for (int i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Update HCF if 'i' is a common factor
        }
    }

    printf("The HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
