#include <stdio.h>
#include <time.h>
int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int array[1000];
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
    } else {
        
        for (int i = position-1; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;

        
        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
