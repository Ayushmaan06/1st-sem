#include <stdio.h>

int main() {
    int numRows, numCols;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &numRows);

    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &numCols);

    int matrix[numRows][numCols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int array[numRows * numCols];
    int arrayIndex = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            array[arrayIndex] = matrix[i][j];
            arrayIndex++;
        }
    }


    printf("One-dimensional array:\n");
    for (int i = 0; i < numRows * numCols; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
