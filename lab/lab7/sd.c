#include <stdio.h>

int main() {
    int r1,max,temp;
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
            if (i==j && i+j==r1-1)
            {
                a[i][j]=a[i][j];
            }
            
            else if (i==j && i<=i/2)
            {
                temp = a[i][j];
                a[i][j]=a[i][j+r1-1];
                a[i][j+r1-1] = temp; 
            }
            else if (i==j && i>=i/2)
            {
                temp = a[i][j];
                a[i][j]=a[i][j-r1+1];
                a[i][j-r1+1] = temp; 
            }
            
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}


 