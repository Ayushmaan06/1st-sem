#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int firstTerm, commonDifference, n;

    printf("Enter the first term of the arithmetic progression: ");
    scanf("%d", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Arithmetic Progression:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", firstTerm + i * commonDifference);
    }

    int sum = (n * (2 * firstTerm + (n - 1) * commonDifference)) / 2;
    printf("\nSum of the arithmetic progression: %d\n", sum);

    return 0;
}
