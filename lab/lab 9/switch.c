#include<stdio.h>

void s(char*, char*);

int main() {
    char s1[100];
    char s2[100];
    puts("string 1");
    gets(s1);
    puts("string 2");
    gets(s2);
    
    s(s1, s2);
}

void s(char* s1, char* s2) {
    int countS1 = 0, countS2 = 0;
    char temp[100];

    for (countS1 = 0; s1[countS1] != '\0'; countS1++) {
    }

    countS1++;

    for (countS2 = 0; s2[countS2] != '\0'; countS2++) {
    }

    countS2++;

    if (countS1 > countS2) {
        for (int i = 0; s1[i] != '\0'; i++) {
            temp[i] = s1[i];
            s1[i] = s2[i];
            s2[i] = temp[i];
        }
    } else {
        for (int i = 0; s2[i] != '\0'; i++) {
            temp[i] = s1[i];
            s1[i] = s2[i];
            s2[i] = temp[i];
        }
    }

    puts(s1);
    puts(s2);
}
