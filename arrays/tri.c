#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n];
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    
    for (int i = 0; i < n; i++)
    {
        printf("enter number %d  ", i+1);
        scanf("%d", &a[i]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {  
        for (int j = i+1; j <n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (a[i]+a[j]+a[k]==x)
                {
                    count++;
                    printf("%d, %d, %d \n", a[i], a[j], a[k]);
                }
                else
                    continue;
            }
            
        }
        
    }
    printf("%d", count);
        
}

