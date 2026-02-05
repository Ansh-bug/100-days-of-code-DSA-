#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100], c[200];
    int i = 0, j = 0, k = 0;

    // Read size of first log
    scanf("%d", &p);

    // Read first sorted array
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Read size of second log
    scanf("%d", &q);

    // Read second sorted array
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    // Merge both arrays
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array (if any)
    while (i < p) {
        c[k] = a[i];
