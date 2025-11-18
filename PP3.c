#include <stdio.h>

void findMinMax(int (*mat)[3], int *min, int *max) {
    *min = *max = mat[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] < *min) *min = mat[i][j];
            if (mat[i][j] > *max) *max = mat[i][j];
        }
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int min, max;
    findMinMax(mat, &min, &max);
    printf("Smallest: %d, Largest: %d\n", min, max);
    return 0;
}
