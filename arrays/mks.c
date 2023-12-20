#include <stdio.h>
int main()
{
    int mks[10] ;
    int roll[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter ur marks");
        scanf("%d", &mks[i]);
        printf("enter ur roll");
        scanf("%d", &roll[i]);
        
    if (mks[i]<=35)
        {
            printf("roll number %d ur marks are less than 35\n", roll[i]);
        }
        else
            continue;
        
    }
    return 0;
}
