#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter number of rows for the first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns for the first matrix: ");
    scanf("%d", &c1);
    printf("Enter number of rows for the second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for the second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Multiplication not possible.\n");
    }
        int a[r1][c1], b[r2][c2], c[r1][c2];

        // Input for the first matrix
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }

        // Input for the second matrix
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                printf("Enter element (%d,%d) of matrix 2: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; i++)
                {
                    c[i][j]=a[i][k]*b[i][k] + c[i][j];
                }
                
            }
            
        }
}