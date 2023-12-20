#include <stdio.h>
int main()
{
    int n;
    printf("rnter size of array: ");
    scanf("%d", &n);
    int a[n];
    int sum=0;
    int osum=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter number %d", i+1);
        scanf("%d", &a[i]);
        if (i%2==0)
        {
            sum+=a[i];
        }
        else
            osum+=a[i];
    }
    printf("even sum :%d \n odd sum :%d", sum, osum);
    return 0;
}
