#include <stdio.h>
int main()
{
    char n;
    printf("enter capital alphabet.: ");
    scanf("%c", &n);
    int l=9;
    int b=4;
    if (n=='B')
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==9||i==5||j==4||j==1)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    }
}