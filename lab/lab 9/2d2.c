#include<stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i==j || i+j==r-1)
            {
                printf("%d  %d  ", &a[i][j], a[i][j]);
            }
            else
                printf("%d      ",  a[i][j]);
            
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("\n%d\n", sum);
    return 0;
}
