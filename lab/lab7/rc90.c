/*123   741
  456   852
  789   963*/
#include <stdio.h>

int main() {
    int r1,temp;
    printf("Enter number of rows for the sq matrix: ");
    scanf("%d", &r1);

    int a[r1][r1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    //transverse
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < i; j++) {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0, k=r1-1; j < k; j++,k--)
        {
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
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