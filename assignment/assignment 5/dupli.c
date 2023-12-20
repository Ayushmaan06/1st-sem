#include <stdio.h>
int main() {
    int n,r=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
            int count = 0; 
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                }
            }
            r+=count;
            printf("No. of duplicate elements of %d is %d\n", a[i], count);
        }
    printf("total duplicate elements: %d", r);
    return 0;
}
