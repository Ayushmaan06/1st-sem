#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int x, y;

    printf("Enter x-coordinate: ");
    scanf("%d", &x);

    printf("Enter y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) is in Quadrant I.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) is in Quadrant II.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) is in Quadrant III.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) is in Quadrant IV.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%d, %d) is at the origin.\n", x, y);
    else
        printf("The point (%d, %d) lies on an axis.\n", x, y);

    return 0;
}
