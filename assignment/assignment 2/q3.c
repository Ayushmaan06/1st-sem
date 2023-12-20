#include <stdio.h>
#include <time.h>
int main() {
    char ch;
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("The entered character is a small case letter.\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("The entered character is a capital case letter.\n");
    else if (ch >= '0' && ch <= '9')
        printf("The entered character is a digit.\n");
    else
        printf("The entered character is a special character.\n");

    return 0;
}
