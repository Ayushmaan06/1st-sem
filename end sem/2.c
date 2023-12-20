#include <stdio.h>

int discount(int count, int d, int p, int op) {
    if (op / 2 > p) {
        return count;
    }
    return discount(++count, d, p - (d * p) / 100, op);
}

int main() {
    int p, d, c;
    scanf("%d %d", &p, &d);
    c = discount(0, d, p, p);
    printf("%d\n", c);
    return 0;
}
