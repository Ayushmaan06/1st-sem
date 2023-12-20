#include <stdio.h>
#include <time.h>
int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Display its ASCII value
    printf("ASCII Value of %c: %d\n", ch, ch);
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    return 0;
}
