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


    for (int m = 0; m < fact; m++) {

        for (int i = 0; i < n; i++) {
            printf("%d", a[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");

        int i = n - 2;
        while (i >= 0 && a[i] >= a[i + 1]) {
            i--;
        }

        if (i < 0) {
            break;  
        }

        int j = n - 1;
        while (a[j] <= a[i]) {
            j--;
        }

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        // Reverse the suffix
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }

    return 0;
}
