#include<stdio.h>

void s(char*);

int main() {
    char str[100];
    puts("array:");
    gets(str);
    s(str);
}

void s(char* str) {
    int l = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        l++;
    }

    

    for (int i = 0,j=l-1; j > i ; i++,j--) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    puts(str);
}
