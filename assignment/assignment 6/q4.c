#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int temp = 0,r;
    for (int i = 0; i < n-2; i++)
    {
        int sum=0;
        for (int j = i; j< i+3; j++)
        {
            for (int k = i; k < i+3; k++)
            {
                sum+=a[j][k];
            }
        }
        if (sum>temp)
        {
            temp=sum;
            r=i;
        }
    }
    printf(" sum : %d", temp);
}
    