#include <stdio.h>

int maze(int ir, int ic, int fr, int fc, int m, int n, int restricted[][n]) {
    int noOfR = 0, noOfD = 0;

    if (ir == fr && ic == fc) {
        return 1;
    }

    if (ir >= m || ic >= n || restricted[ir][ic]) {
        return 0; // Cell is out of bounds or restricted
    }

    if (ic == fc) {
        noOfD += maze(ir + 1, ic, fr, fc, m, n, restricted);
    }

    if (ir == fr) {
        noOfR += maze(ir, ic + 1, fr, fc, m, n, restricted);
    }

    if (ir < fr && ic < fc) {
        noOfR += maze(ir, ic + 1, fr, fc, m, n, restricted);
        noOfD += maze(ir + 1, ic, fr, fc, m, n, restricted);
    }

    int tw = noOfR + noOfD;
    return tw; // Total ways
}

int main() {
    int ir, ic, fr, fc, m, n;
    
    // Prompt the user for input
    printf("Enter the starting row, starting column, final row, and final column: ");
    scanf("%d %d %d %d", &ir, &ic, &fr, &fc);
    ir--;fr--;ic--;fc--;
    printf("Enter the number of rows and columns in the grid: ");
    scanf("%d %d", &m, &n);

    int restricted[m][n];

    // Prompt the user to input restricted cells (1 for restricted, 0 for unrestricted)
    printf("Enter the grid with 1 for restricted and 0 for unrestricted cells:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &restricted[i][j]);
        }
    }

    int s = maze(ir, ic, fr, fc, m, n, restricted);
    printf("Total number of paths: %d\n", s);

    return 0;
}
