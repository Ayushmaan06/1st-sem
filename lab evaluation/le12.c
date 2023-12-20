#include <stdio.h>

int main() {
    int n, sh, lo;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n], s[n], l[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d in array: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter short: ");
    scanf("%d", &sh);

    printf("Enter long: ");
    scanf("%d", &lo);

    for (int i = sh - 1; i < n; i++) {
        int sum = 0;
        for (int j = i - sh + 1; j <= i; j++) {
            sum += a[j];
        }
        s[i] = sum / sh;
    }

    for (int i = 0; i < sh - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += a[j];
        }
        s[i] = sum / (i + 1);
    }

    for (int i = lo - 1; i < n; i++) {
        int sum = 0;
        for (int j = i - lo + 1; j <= i; j++) {
            sum += a[j];
        }
        l[i] = sum / lo;
    }

    for (int i = 0; i < lo - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += a[j];
        }
        l[i] = sum / (i + 1);
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == l[i]) {
            if (s[i - 1] > s[i]) {
                printf("%d sell\n", i);
            } else {
                printf("%d buy\n", i);
            }
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
