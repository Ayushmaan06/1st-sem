#include <stdio.h>

int main() {
    int r1,max;
    printf("Enter number of rows for the sq matrix: ");
    scanf("%d", &r1);
    int a[r1][r1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < r1; j++) {
            if ((i+1)%2==0 && (j+1)%2==0 )
            {
                a[i][j]*=a[i][j];
            }
            if ((i+1)%2!=0 && (j+1)%2!=0)
            {
                a[i][j]*=a[i][j]*a[i][j];
            }
            if ((i+1)%2==0 && (j+1)%2!=0)
            {
                a[i][j]++;
            }
            if ((i+1)%2!=0 && (j+1)%2==0)
            {
                a[i][j]--;
            }
        }
    }

}


 