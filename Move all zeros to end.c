#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    // Print the result
    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
