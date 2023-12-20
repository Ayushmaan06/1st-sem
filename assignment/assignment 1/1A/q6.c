#include <stdio.h>
#include <time.h>
int main() {
    float floatNum;
    int intNum;

    // Read a floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);

    // Convert to an integer (truncate decimal part)
    intNum = (int)floatNum;

    // Display the integer value
    printf("Integer Value: %d\n", intNum);
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    return 0;

    return 0;
}
