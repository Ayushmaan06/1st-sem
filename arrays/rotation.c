#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n], temp ;

    for (int i = 0; i < n; i++)
    {
        printf("enter no %d : ", i+1);
        scanf("%d", &a[i]);
    }
    int k;
    printf("number to be rotated: ");
    scanf("%d",&k);
    if (k>n)
    {
        k%=n;
    }
    for (int i = 0, j=n-1; i < j; i++, j--)
    {
        temp=a[i]
        ;a[i]=a[j];
        a[j]=temp;
    }
    for (int i = 0, j=k-1; i < j; i++, j--)
    {
        temp=a[i]
        ;a[i]=a[j];
        a[j]=temp;
    }for (int i = k, j=n-1; i < j; i++, j--)
    {
        temp=a[i]
        ;a[i]=a[j];
        a[j]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("no %d : ", i+1);
        printf("%d \n", a[i]);
    }}
    