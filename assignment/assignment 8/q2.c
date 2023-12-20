#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *ptr=a + (n-1);
    while (ptr>=a)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    
    return 0;
}
