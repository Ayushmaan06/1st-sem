#include <stdio.h>

int main() {
    // Array of pointers
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int* ptrArr[2]; // Array of pointers to integers
    ptrArr[0] = arr1;
    ptrArr[1] = arr2;

    printf("Array of Pointers:\n");
    for (int i = 0; i < 2; i++) {
        printf("Address of arr%d: %p, Values: %d %d %d\n", i + 1, ptrArr[i], ptrArr[i][0], ptrArr[i][1], ptrArr[i][2]);
    }

    // Pointer to array
    int arr3[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int (*ptrArr2)[3]; // Pointer to an array of integers

    ptrArr2 = arr3;

    printf("\nPointer to Array:\n");
    printf("Address of arr3: %p\n", ptrArr2);
       printf("Printing 2D Array using ptrArr2:\n");
    printf("%d %d %d\n", ptrArr2[0][0], ptrArr2[0][1], ptrArr2[0][2]); // First row
    printf("%d %d %d\n", ptrArr2[1][0], ptrArr2[1][1], ptrArr2[1][2]); 

    return 0;
}
