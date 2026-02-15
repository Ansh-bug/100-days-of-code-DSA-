#include <stdio.h>

int main() {
    int m, n;
    int a[100][100];
    int sum = 0;

    // Read rows and columns
    scanf("%d %d", &m, &n);

    // Read matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of primary diagonal
    int limit = (m < n) ? m : n;   // in case matrix is not square
    for (int i = 0; i < limit; i++) {
        sum += a[i][i];
    }

    // Print result
    printf("%d", sum);

    return 0;
}
