#include <stdio.h>
#include <string.h> // Include the string.h header for string functions

int main() {
    int l = 0, l1 = 0, c = 0;
    char s[100], s1[100];
    printf("Enter the 1st string: ");
    gets(s);
    printf("Enter the 2nd string: ");
    gets(s1);
    for (int i = 0; s[i] != '\0'; i++) {
        l++;
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        l1++;
    }
    for (int i = 0; i <= l; i++) {
        c = 0;
        for (int k = 0; k < l1; k++) {
            if (s[i + k] == s1[k]) {
                c++;
            }
        }
        if (c == l1) {
            printf("YES\n");
            break; 
        }
    }
    
    if (c != l1) {
        printf("NO\n"); 
    }

    return 0;
}
