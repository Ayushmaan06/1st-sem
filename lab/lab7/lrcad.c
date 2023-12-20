#include <stdio.h>

int main() {
    int r1,sum,temp,remp,max=0;
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
        sum=0;
        for (int j = 0; j < r1; j++) {
            sum+=a[j][i];
            
        }
        printf("sum for coloumn %d is: %d \n ", i+1, sum);
        remp=sum;
        if (remp>max)
        {
            max=remp;
        }
    }
    printf("largest coloumn is %d\n", max);
        max=0;
    for (int i = 0; i < r1; i++) {
        sum=0;
        for (int j = 0; j < r1; j++) {
            sum+=a[i][j];
        }
        printf("sum for row %d is: %d \n ", i+1, sum);
        temp=sum;
        if (temp>max)
        {
            max=temp;
        }
    }
    printf("largest row is %d\n", max);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}