#include<stdio.h>
int main()
{
    int a,f;
    scanf("%d %d", &a, &f);
    switch (a)
    {
    case 1:
        if (f>3)
        {
            printf("0");
        }
        else
        {
            printf("5");
        }
        
        break;
    case 2:
        if (f>2)
        {
            printf("0");
        }
        else
        {
            printf("4");
        }
        
        break;
    case 3:
        if (f>1)
        {
            printf("0");
        }
        else
        {
            printf("5");
        }
        
        break; 
    default:
        printf("bhak!");
        break;
    }
}