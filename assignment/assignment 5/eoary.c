#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int originalArray[size];
    int evenArray[size]; // Assuming the same size for even and odd arrays
    int oddArray[size];
    int evenSize = 0;
    int oddSize = 0;

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &originalArray[i]);

        if (originalArray[i] % 2 == 0) {
            evenArray[evenSize++] = originalArray[i];
        } else {
            oddArray[oddSize++] = originalArray[i];
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("Odd elements: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}
