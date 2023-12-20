#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    for (int factor = 2; factor <= n; factor++) {
        while (n % factor == 0) {
            printf("%d ", factor);
            n /= factor;
        }
    }

    printf("\n");

    return 0;
}
