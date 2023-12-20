/*
123 123698745
456 
789 
*/
#include<stdio.h>
int main()
{
    int r1, c1;
    printf("enter no of rows for first matrix ");
    scanf("%d", &r1);
    printf("enter no of coloumns for first matrix ");
    scanf("%d", &c1);

    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter (%d,%d) element of matrix 1", i+1, j+1);
            scanf("%d",& a[i][j]);
        }
    }
    int minr=0;
    int maxr=r1-1;
    int minc=0;
    int maxc=c1-1;
    int tne=r1*c1;
    int count=0;
    while (count<tne)
    {
        //minr
        for (int j = minc; j <= maxc ; j++)
        {
            printf("%d", a[minr][j]);
            count++;
        }
        minr++;
        if (count>tne)
        {
            break;
        }
        
        //maxc
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d", a[i][maxc]);
            count++;
        }
        maxc--;
        if (count>tne)
        {
            break;
        }
        //minr
        for (int j = maxc; j >=minc; j--)
        {
            printf("%d",a[maxr][j]);
            count++;
        }
        maxr--;
        if (count>tne)
        {
            break;
        }
        for (int i = maxr; i >=minr; i--)
        {
            printf("%d", a[i][minc]);
            count++;
        }
        minc++;    
        if (count>tne)
        {
            break;
        }
    }
}
    /*
    for
    1 2  3  4
    5 6  7  8
    9 10 11 12      error therefore add break
    */

    