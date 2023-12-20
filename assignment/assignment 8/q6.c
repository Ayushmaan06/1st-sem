#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    int c=0;
    char s[100];
    puts("string: ");
    gets (s);
    char *ptr=s;
    while (*ptr != '\0')
    {
        if (*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        {
            c++;
        }
        ptr ++;
    }
    printf("count: %d",c);
}