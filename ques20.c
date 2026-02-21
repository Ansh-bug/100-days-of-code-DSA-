#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int count = 0;

    // Read size
    scanf("%d", &n);

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check all subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == 0) {
                count++;
            }
        }
    }

    // Print result
    printf("%d", count);

    return 0;
}