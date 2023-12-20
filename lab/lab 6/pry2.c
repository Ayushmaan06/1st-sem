#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    int indices[n];
    for (int i = 0; i < n; i++) {
        indices[i] = 0;
    }

    for (int m = 0; m < fact; m++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

        int i = n - 1;
        while (i > 0 && indices[i] >= i) {
            indices[i] = 0;
            i--;
        }
        indices[i]++;

        for (int j = 0; j < n; j++) {
            if (j != i) {
                indices[j] = (indices[j] + 1) % n;
            }
        }

        // Apply the permutation to the array
        for (int j = 0; j < n; j++) {
            int temp = a[j];
            a[j] = a[indices[j]];
            a[indices[j]] = temp;
        }
    }

    return 0;
}
