#include <stdio.h>

void swap(int **ptr1, int **ptr2) {
    **ptr1 = **ptr1 + **ptr2;
    **ptr2 = **ptr1 - **ptr2;
    **ptr1 = **ptr1 - **ptr2;
}

int main() {
    int var1 = 10, var2 = 20;

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    printf("Before swapping: var1 = %d, var2 = %d\n", var1, var2);

    swap(&ptr1, &ptr2);

    printf("After swapping: var1 = %d, var2 = %d\n", var1, var2);

    return 0;
}
