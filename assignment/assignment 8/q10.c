#include <stdio.h>
#include <time.h>

int add(int *, int);
double avg(int *, int);
long long multiply(int *, int); // Changed return type to long long for larger products
int max(int *, int);
int min(int *, int);

int main() {
    int choice, n;
    int sumResult = 0;
    long long productResult = 1; // Changed to long long
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t)); // Display current time

    printf("Enter size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Choose an operation:\n");
    printf("1. Addition\n2. Average\n3. Multiplication\n4. Maximum\n5. Minimum\n");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        switch (choice) {
            case 1:
                sumResult = add(a, n);
                printf("Result: %d\n", sumResult);
                break;
            case 2:
                printf("Result: %.2f\n", avg(a, n));
                break;
            case 3:
                productResult = multiply(a, n);
                printf("Result: %lld\n", productResult); // Changed format specifier to %lld for long long
                break;
            case 4:
                printf("Result: %d\n", max(a, n));
                break;
            case 5:
                printf("Result: %d\n", min(a, n));
                break;
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}


int add(int *a, int b) {
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += *(a + i);
    }
    return sum;
}

double avg(int *a, int b) {
    int sum = add(a, b);
    return (double)sum / b;
}

long long multiply(int *a, int b) { // Changed return type to long long
    long long product = 1; // Changed product variable type to long long
    for (int i = 0; i < b; i++) {
        product *= *(a + i);
    }
    return product;
}

int max(int *a, int b) {
    int maximum = *a;
    for (int i = 1; i < b; i++) {
        if (*(a + i) > maximum) {
            maximum = *(a + i);
        }
    }
    return maximum;
}

int min(int *a, int b) {
    int minimum = *a;
    for (int i = 1; i < b; i++) {
        if (*(a + i) < minimum) {
            minimum = *(a + i);
        }
    }
    return minimum;
}