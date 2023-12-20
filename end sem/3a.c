#include<stdio.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    char *p = s;
    int c = 0;

    // Counting the number of characters in the string
    while (*p != '\0') {
        c++;
        p++;
    }


    p = s;
    char *l = &s[c - 2]; 


    while (l > p) {
        char temp = *p;
        *p = *l;
        *l = temp;
        p++;
        l--;
    }

    puts(s);

    return 0;
}
