#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;

}