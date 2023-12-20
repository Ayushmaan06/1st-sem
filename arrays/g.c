#include <stdio.h>
int main()
{
    int n;
    printf("rnter size of array: ");
    scanf("%d", &n);
    int a[n] ;
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        printf("enter no %d : ", i+1);
        scanf("%d", &a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }
        else
            continue;
    }
    printf("%d", max);
}