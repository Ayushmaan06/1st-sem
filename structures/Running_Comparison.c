#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n, c = 0;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i]) {
                c++;
            }
        }
        printf("%d\n", c);
        t--;
    }
    return 0;
}
