#include <stdio.h>
#include <time.h>

int main() {
    int r1, c1, temp;

    printf("Enter the number of rows: ");
    scanf("%d", &r1);
    printf("Enter the number of columns: ");
    scanf("%d", &c1);

    int m[r1][c1];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Print the current time
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
printf("\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0, k = c1 - 1; j < k; j++, k--) {
            temp = m[i][j];
            m[i][j] = m[i][k];
            m[i][k] = temp;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0, k = r1 - 1; j < k; j++, k--) {
            temp = m[j][i];
            m[j][i] = m[k][i];
            m[k][i] = temp;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}
