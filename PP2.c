#include <stdio.h>

void sortMatrixToArray(int mat[4][4], int arr[]) {
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[index++] = mat[i][j];
        }
    }
    // Bubble sort
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int mat[4][4] = {{4, 2, 1, 3}, {8, 6, 5, 7}, {12, 10, 9, 11}, {16, 14, 13, 15}};
    int arr[16];
    sortMatrixToArray(mat, arr);
    printf("Sorted array: ");
    for (int i = 0; i < 16; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
