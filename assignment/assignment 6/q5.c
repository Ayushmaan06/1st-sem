#include <stdio.h>

// Function to search for a target in a sorted 2D matrix
int searchMatrix(int matrix[100][100], int m, int n, int target) {
    if (m == 0 || n == 0) {
        return 0;  // Empty matrix, target not found
    }

    int row = 0;
    int col = n - 1;  // Start from the top-right corner

    while (row < m && col >= 0) {
        int current = matrix[row][col];

        if (current == target) {
            return 1;  // Target found
        } else if (current > target) {
            col--;  // Move left
        } else {
            row++;  // Move down
        }
    }

    return 0;  // Target not found
}

int main() {
    int m, n, target;

    // Prompt the user for the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[100][100];

    // Prompt the user to input the sorted matrix
    printf("Enter the elements of the sorted matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Prompt the user for the target value
    printf("Enter the target value to search: ");
    scanf("%d", &target);

    int result = searchMatrix(matrix, m, n, target);

    if (result) {
        printf("Target value found in the matrix.\n");
    } else {
        printf("Target value not found in the matrix.\n");
    }

    return 0;
}
