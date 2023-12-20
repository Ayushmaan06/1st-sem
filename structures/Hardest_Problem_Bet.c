#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

       if (a<b)
       {
        if (a<c)
        {
            printf("Draw\n");
        }
        else
            printf("Alice\n");
       }
       else
       {
            if (b<c)
            {
                printf("Bob\n");
            }
            else
                printf("Alice\n");
       }
       

       
        
        t--;
    }
    return 0;
}
