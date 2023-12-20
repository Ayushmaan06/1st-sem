#include <stdio.h>
#include <time.h>

int main() {

    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));
    
    int a, b, c;
    
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
    printf("Enter 2nd numbers: ");
    scanf("%d", &b);    
    printf("Enter 3rd numbers: ");
    scanf("%d", &c);
    
    if (a > b) {
        if (a > c)
            printf("a is greatest");
        else
            printf("c is greatest");
    } else {
        if (b > c)
            printf("b is greatest");
        else
            printf("c is greatest");
    }
    
    return 0;
}
