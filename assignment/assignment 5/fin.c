#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int size, searchElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            found = 1;
            printf("%dth element ", i+1);
            break;
        }
    }

    if (found) {
        printf("%d found in the array.\n", searchElement);
    } else {
        printf("%d not found in the array.\n", searchElement);
    }

    return 0;
}
