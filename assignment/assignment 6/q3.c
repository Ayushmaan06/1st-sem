#include <stdio.h>
#include <time.h>

int main() {
    int r1, c1;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c1);

    int a[r1][c1], count=0;

    // Input matrix elements
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter (%d,%d) element of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            if (a[i][j]==1)
            {
                count++;
            }
            
        }
    }
    printf("%d is counr of land\n", count);

    // Print the current time
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    // Rest of your code for matrix manipulation

    return 0;
}
