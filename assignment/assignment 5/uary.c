#include <stdio.h>
int main(){
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    int isUnique[n];
    for (int i = 0; i < n; i++) {
        isUnique[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                isUnique[j] = 0;
            } 
        }
    }
    printf("Unique elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (isUnique[i]==1) {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
