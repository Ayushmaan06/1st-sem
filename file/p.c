#include <stdio.h>

int per(int x, int a, int d, int count) {
    if (a < x / 2) {
        return count;
    }
    return per(x, (a * (100 - d)) / 100, d, count + 1);
}

int main() {
    int x, a, d, c = 0, t;
    scanf("%d %d", &x, &d);
    a = x;
    t = per(x, a, d, c);
    printf("%d", t);
    return 0;
}
