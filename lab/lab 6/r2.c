#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for the number of elements.\n");
        return 1; // Exit with an error code
    }

  
    int a[n], b[n];


    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);

        
    }

    // Input the number of steps to be rotated
    printf("Enter the number of steps to be rotated: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input for the number of steps.\n");
        return 1; // Exit with an error code
    }

    // Perform the rotation operation
    k %= n; // Ensure k is within the range [0, n)

    for (int j = 0; j < n; j++) {
        b[(j + k) % n] = a[j];
    }

    // Print the original array a
    printf("Original array a: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Print the rotated array b
    printf("Rotated array b: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
