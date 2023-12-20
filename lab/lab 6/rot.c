#include <stdio.h>
int main()
{
    int n,k;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    printf("enter number of steps to be rotated: ");
    scanf("%d",&k);
    for (int j = 0; j < n-k; j++)
    {
        b[j+k]=a[j];
    }
    for (int l = 0; l < k; l++)
    {
        b[l]=a[n-k+l];
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
      for (int j = 0; j < n-k; j++)
    {
        b[j+k]=a[j];
    }
    for (int l = 0; l < k; l++)
    {
        b[l]=a[n-k+l];
    }
    
    return 0;
    
}