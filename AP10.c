
#include <stdio.h>
void shiftArray(int arr[], int n, int positions, char direction) {
    int result[10] = {0};
    int i;
    if (direction == 'L') {
        for (i = 0; i < n; i++) {
            int idx = i - positions;
            if (idx >= 0) result[idx] = arr[i];
        }
    } else {
        for (i = 0; i < n; i++) {
            int idx = i + positions;
            if (idx < n) result[idx] = arr[i];
        }
    }
    printf("Shifted array: ");
    for (i = 0; i < n; i++) printf("%d ", result[i]);
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int positions; char direction;
    printf("Enter n positions and direction (L/R): ");
    scanf("%d %c", &positions, &direction);
    shiftArray(arr, 10, positions, direction);
    return 0;
}
