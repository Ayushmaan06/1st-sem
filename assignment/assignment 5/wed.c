#include <stdio.h>


int main() {
    int y, m, d;

    printf("Enter a date (YYYY-MM-DD): ");
    if (scanf("%d-%d-%d", &y, &m, &d) != 3) {
        printf("Invalid date format. Please use YYYY-MM-DD.\n");
        return 1;
    }

   int N = d + 2*m + (3*(m+1)/5) + y + (y/4) - (y/100) + (y/400) + 2;
    return 0;
}
