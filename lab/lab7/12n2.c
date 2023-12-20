/*
123 123698745
456 
789 
*/
#include<stdio.h>
int main()
{
    int r1;
    printf("enter no of rows for sq matrix ");
    scanf("%d", &r1);


    int a[r1][r1];

    int minr=0;
    int maxr=r1-1;
    int minc=0;
    int maxc=r1-1;
    int tne=r1*r1;
    int count=0;
    while (count<tne)
    {
        //minr
        for (int j = minc; j <= maxc ; j++)
        {
           a[minr][j]=++count;
        }
        minr++;
        if (count>tne)
        {
            break;
        }
        
        //maxc
        for (int i = minr; i <= maxr; i++)
        {
            a[i][maxc]=
            ++count;
        }
        maxc--;
        if (count>tne)
        {
            break;
        }
        //minr
        for (int j = maxc; j >=minc; j--)
        {
            a[maxr][j]=
            ++count;
        }
        maxr--;
        if (count>tne)
        {
            break;
        }
        for (int i = maxr; i >=minr; i--)
        {
            a[i][minc]=
            ++count;
        }
        minc++;    
        if (count>tne)
        {
            break;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
}
    
    