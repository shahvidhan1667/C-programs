#include <stdio.h>

void updateMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = 8;
    int min, max;
    updateMinMax(arr, n, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}
