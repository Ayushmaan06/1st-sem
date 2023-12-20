#include <stdio.h>
#include <string.h>

int main() {
    int l = 0, r, c = 100;
    printf("Number of rows: ");
    scanf("%d", &r);
    char m[r][c];

    // Input the matrix
    for (int i = 0; i < r; i++) {
        printf("Enter the %d row string: ", i + 1);
        scanf("%s", m[i]);
    }

    char s[100], s1[100];

    printf("Enter the string to be searched: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        l++;
    }
    for (int i = 0; i < l; i++)
    {
        s1[l-1-i]=s[i];
    }
    
    int found = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; m[i][j] != '\0'; j++) {
            int c = 0;
            for (int k = 0; s[k] != '\0'; k++) {
                if (m[i][j + k] == s[k]) {
                    c++;
                }
            }
            if (c == l) {
                printf("Found :) '%s' in row %d\n", s, i + 1);
                found = 1;
                break;
            }
        }
    }
        for (int i = 0; i < r; i++) {
        for (int j = 0; m[i][j] != '\0'; j++) {
            int c = 0;
            for (int k = 0; s1[k] != '\0'; k++) {
                if (m[i][j + k] == s1[k]) {
                    c++;
                }
            }
            if (c == l) {
                printf("Found :) '%s' in row %d\n", s, i + 1);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Not found :(\n");
    }

    return 0;
}
