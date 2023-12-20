#include <stdio.h>
#include <time.h>

int main() {
    int ROWS, COLS;

    // Prompt the user for matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &ROWS);
    printf("Enter the number of columns: ");
    scanf("%d", &COLS);

    int matrix[ROWS][COLS];

    // Prompt the user to input the matrix
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the current time
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    // Flags to track which rows and columns need to be zeroed
    int zeroRows[ROWS];
    int zeroCols[COLS];

    // Initialize flags to zero
    for (int i = 0; i < ROWS; i++) {
        zeroRows[i] = 0;
    }

    for (int j = 0; j < COLS; j++) {
        zeroCols[j] = 0;
    }

    // Identifying Zero Elements
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = 1;
                zeroCols[j] = 1;
            }
        }
    }

    // Set rows to zero
    for (int i = 0; i < ROWS; i++) {
        if (zeroRows[i]) {
            for (int j = 0; j < COLS; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to zero
    for (int j = 0; j < COLS; j++) {
        if (zeroCols[j]) {
            for (int i = 0; i < ROWS; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Print the modified matrix
    printf("Modified Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
