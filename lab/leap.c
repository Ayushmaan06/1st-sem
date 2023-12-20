#include <stdio.h>
int main()
{  
    int y;
    printf("Enter an year: ");
    scanf("%d", &y);  
    
    if ((y%4==0) && ((y%400==0) || (y%100!=0)))
        { 
            printf("%d is a leap year", y);
        }
    else
        {
            printf("not a leap year");
        }
    
    return 0;
}