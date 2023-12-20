#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 

    while (t--) {
        int n;
        scanf("%d", &n);
        getchar(); 

        char arr[n];
        int count = 0;

        for (int i = 0; i < n; i++) {
            scanf(" %c", &arr[i]); 
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == '5' || arr[i] == '0') {
                count = 1;
                break;
            }
        }

        if (count == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
