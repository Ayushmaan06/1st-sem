#include <stdio.h>

int main() {
    int numRows, numCols;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &numRows);

    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &numCols);

    int array[numRows * numCols];

    printf("Enter %d elements for the one-dimensional array:\n", numRows * numCols);
    for (int i = 0; i < numRows * numCols; i++) {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int matrix[numRows][numCols];
    int arrayIndex = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = array[arrayIndex];
            arrayIndex++;
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
