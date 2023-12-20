#include <stdio.h>
#include <time.h>

int main() {
    int m, n;

    // Prompt the user for the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int cost;

    int minCost;
    printf("Enter the cost for each cell (assuming equal cost for all movements):\n");
    scanf("%d", &cost);
    if (n>m)
    {minCost = cost * (m + (n-m));
    printf("Minimum cost path: %d\n", minCost);}
    else
    {minCost = cost * (m + (m-n));
    printf("Minimum cost path: %d\n", minCost);}
    // Get and print the current time
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    return 0;
}
