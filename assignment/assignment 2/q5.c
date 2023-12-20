#include <stdio.h>
#include <time.h>
int main() {
    char ch;
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    (ch >= 'a' && ch <= 'z')
        ? printf("Uppercase equivalent: %c\n", ch - 32)
        : (ch >= 'A' && ch <= 'Z')
            ? printf("Lowercase equivalent: %c\n", ch + 32)
            : printf("Not an alphabet character.\n");
    
    return 0;
}
