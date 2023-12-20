#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int size1, size2;

    printf("Enter the number of elements in the 1st array: ");
    scanf("%d", &size1);
    int a[size1];
    for (int i = 0; i < size1; i++) {
        printf("Enter %d element of 1st array : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in the 2nd array: ");
    scanf("%d", &size2);
    int b[size2];
    for (int i = 0; i < size2; i++) {
        printf("Enter %d element of 2nd array : ", i + 1);
        scanf("%d", &b[i]);
    }

    int mergedSize = size1 + size2;
    int merged[mergedSize];

    for (int i = 0; i < size1; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = b[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
