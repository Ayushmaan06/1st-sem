#include <stdio.h>
int main()
{
    int n;
    printf("enter no.: ");
    scanf("%d", &n);
    int l=9;
    int b=4;
    if (n==9)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==9||i==5||j==4||(i<=5&&j==1))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    }
    if(n==8)
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
    if(n==7)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||j==4)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
        }
    }
    if(n==6)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==5||i==9||j==1||(i>=5&&j==4))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
        }
    }
    if (n==5)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==9||i==5||(i<=5&&j==1)||(i>=5&&j==4))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    }
    if (n==4)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==9||i==5||j==4||(i<=5&&j==1))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    }
    if(n==3)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==9||i==5||j==4)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
        }
    }
    if (n==2)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (i==1||i==9||i==5||(i<=5&&j==4)||(i>=5&&j==1))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    }
    if (n==1)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (j==4)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
        }
    }
    if (n==0)
    {for (int i =1; i <= l; i++)
        {
            for (int j = 1; j <=b ; j++)
            {
                if (j==4||j==1||i==1||i==9)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        printf("\n");
        }
    }
    return 0;
}