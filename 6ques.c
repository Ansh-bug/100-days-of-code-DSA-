#include <stdio.h>

int main() {
    int n;
    int arr[100];

    // Read size of array
    scanf("%d", &n);

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // If array is empty
    if (n == 0) {
        return 0;
    }

    int j = 0;  // index for unique elements

    // Traverse array from second element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Print unique elements
    for (int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
