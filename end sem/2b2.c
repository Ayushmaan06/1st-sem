#include<stdio.h>

int main() {
    int size_a, size_b;
    scanf("%d %d", &size_a, &size_b);
    
    // Declaring arrays for input and output
    int a[size_a], b[size_b], c[size_a + size_b];

    // Inputting elements for arrays a[] and b[]
    for (int i = 0; i < size_a; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size_b; i++) {
        scanf("%d", &b[i]);
    }

    int a_take = 1, b_take = 2; // Controls how many elements to take from each array
    int pointer_a = 0, pointer_b = 0; // Pointers to track current positions in arrays a[] and b[]
    int pointer_c = 0; // Pointer to track current position in array c[] (output)

    // Loop to merge arrays a[] and b[] into c[] based on specific conditions
    for (int i = 0;; i++) {
        if (pointer_a >= size_a && pointer_b >= size_b)
            break; // Exit the loop if both arrays are completely traversed
        
        if (i % 2 == 0) { // Even iterations
            // Merging elements from array a[] based on a_take value
            for (int j = 0; j < a_take; j++) {
                if (pointer_a >= size_a)
                    break; // Break if end of array a[] is reached
                c[pointer_c++] = a[pointer_a++]; // Copy element from a[] to c[]
            }
            // Adjusting a_take value for the next iteration
            a_take = (a_take == 1) ? 2 : 1;
        } else if (i % 2) { // Odd iterations
            // Merging elements from array b[] based on b_take value
            for (int j = 0; j < b_take; j++) {
                if (pointer_b >= size_b)
                    break; // Break if end of array b[] is reached
                c[pointer_c++] = b[pointer_b++]; // Copy element from b[] to c[]
            }
            // Adjusting b_take value for the next iteration
            b_take = (b_take == 1) ? 2 : 1;
        }
    }

    // Printing the merged array c[]
    for (int i = 0; i < size_a + size_b; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
