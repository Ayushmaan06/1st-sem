#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int array[1000];
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position where you want to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > size + 1) {
        printf("Invalid position!\n");
    } else {
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        // Shift elements to make room for the new element
        for (int i = size; i >= position; i--) {
            array[i] = array[i - 1];
        }
        array[position - 1] = element;
        size++;

        printf("Array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
