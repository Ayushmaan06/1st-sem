#include <stdio.h>
int main()
{  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    if (c>=65 && c<=90 )
    {
        printf("already capital");
    }
    if (c>=97 && c<=122)
    {
        c-=32;
        printf("capital dorm is %c ", c);
    }
    
    
    
    return 0;
}