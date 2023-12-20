#include <stdio.h>
int main()
{
    int n, temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n] ;

    for (int i = 0; i < n; i++)
    {
        printf("enter no %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i=0, j= n-1; i < j; i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" no %d : ", i+1);
        printf("%d \n", a[i]);
    }
}
    