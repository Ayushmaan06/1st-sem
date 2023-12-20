#include<stdio.h>

int len(char*);

int main() {
    char str[100];
    gets(str);
    int l = len(str);
    printf("%d\n", l);
}

int len(char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
