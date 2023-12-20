#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    while (n-- > 0)
    {
        int t, b;
        scanf("%d", &t);
        if (t < 50)
        {
            if (t % 2 == 0)
            {
                b = (50 - t) / 2;
            }
            else
            {
                b = (50 - t + 1) / 2 + 2;
            }
        }
        else
        {
            if ((t-50) % 3 == 0)
            {
                b = (t-50) / 3;
            }
            if ((t-50) % 3 == 1)
            {
                b = (t-51) / 3 + 2;
            }
            if ((t-50) % 3 == 2)
            {
                b = (t-52) / 3 + 4;
            }
        }
        printf("%d\n", b);
    }
    return 0;
}
