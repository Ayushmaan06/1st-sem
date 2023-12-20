#include <stdio.h>

int main(void)
{
    int n,r;
    int a[n];
	scanf("%d %d", & n, &r);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]>r)
    {
        printf("Good boi\n");
    }
    else
        printf("Bad boi\n");
    }
    
    
    
	return 0;
}

