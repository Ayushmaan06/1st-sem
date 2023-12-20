#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int even[size];
    int odd[size];
    int evenSize = 0;
    int oddSize = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even[evenSize++] = array[i];
        } else {
            odd[oddSize++] = array[i];
        }
    }

    for (int i = 0; i < evenSize - 1; i++) {
        for (int j = 0; j < evenSize - i - 1; j++) {
            if (even[j] > even[j + 1]) {

                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < oddSize - 1; i++) {
        for (int j = 0; j < oddSize - i - 1; j++) {
            if (odd[j] > odd[j + 1]) {

                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    printf("Sorted even elements: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Sorted odd elements: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
