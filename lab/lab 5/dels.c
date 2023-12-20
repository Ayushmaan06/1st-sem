#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
            int count = 1; 
            for (int j = i + 1; j < n; ) {
                if (a[i] == a[j]) {
                    for (int k = j; k < n-1; k++)
                    {
                        a[k]=a[k+1];
                    }
                    n--;}
                else
                    j++;
                }
            }
        
        for (int i = 0; i < n; i++) {
            printf("element %d: ", i + 1);
            printf("%d\n", a[i]);
    }

    
    return 0;
}
