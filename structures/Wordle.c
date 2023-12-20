#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

        getchar(); 
    while (n > 0) {

        char s[6], t[6], m[6]; 
        fgets(s, sizeof(s), stdin);
        getchar(); 
        fgets(t, sizeof(t), stdin);
        getchar(); 

        for (int i = 0; i < 5; i++) {
            if (s[i] != t[i]) {
                m[i] = 'B';
            } else {
                m[i] = 'G';
            }
        }
        m[5] = '\0'; 
        puts(m);

        n--;
    }
    return 0;
}
