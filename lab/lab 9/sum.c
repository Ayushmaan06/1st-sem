#include<stdio.h>

int add(int*, int n);

int main() {
    int n;
    puts("Enter n");
    scanf("%d", &n);
    int a[n];
    puts("Enter array");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int res = add(a, n);
    printf("%d", res);
}

int add(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
