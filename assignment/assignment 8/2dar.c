#include <stdio.h>

void convert(int *a, int n) {
    int *ptr = a; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(ptr + i * n + j)); 
        }
        printf("\n");
    }
}

int main() {
    int a[100][100], n;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    int *ptr = (int *)a; 
    for (int i = 0; i < n * n; i++) {
        scanf("%d", ptr + i); 
    }

    convert((int *)a, n);

    return 0;
}