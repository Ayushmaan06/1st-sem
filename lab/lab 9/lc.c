#include<stdio.h>

void s(char*);

int main() {
    char str[100];
    puts("array");
    gets(str);
    s(str);
}

void s(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 91)
            str[i] += 32;

        printf("%c", str[i]);
    }
}
