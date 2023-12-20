#include <stdio.h>

int main() {
    int r1,r,max,count=0;
    printf("Enter number of rows for the sq matrix: ");
    scanf("%d", &r1);
    int a[r1][r1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    max=0;
    for (int i = 0; i < r1; i++) {
        count=0;
        for (int j = 0; j < r1; j++) {
            if (a[i][j]==1)
            {
                count++;
            } 
        }
        if (count>max)
        {
            max=count;
            r=i;
        }
    }
    printf("row %d, count %d\n", r, max);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}