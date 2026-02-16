#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int visited[100] = {0};   // mark elements already counted

    // Read size
    scanf("%d", &n);

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency
    for (int i = 0; i < n; i++) {

        // If already counted, skip
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d:%d ", arr[i], count);
    }

    return 0;
}
