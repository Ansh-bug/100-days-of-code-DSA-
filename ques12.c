#include <stdio.h>

int main() {
    int m, n;
    int a[100][100];
    int isSymmetric = 1;

    // Read rows and columns
    scanf("%d %d", &m, &n);

    // If not square → not symmetric
    if (m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Read matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Print result
    if (isSymmetric)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0
};