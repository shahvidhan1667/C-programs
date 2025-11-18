#include <stdio.h>

#define MAX 10

void inputMatrix(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter first matrix:\n");
    inputMatrix(mat1, r1, c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter second matrix:\n");
    inputMatrix(mat2, r2, c2);

    if (r1 == r2 && c1 == c2) {
        addMatrix(mat1, mat2, result, r1, c1);
        printf("Addition:\n");
        printMatrix(result, r1, c1);

        subtractMatrix(mat1, mat2, result, r1, c1);
        printf("Subtraction:\n");
        printMatrix(result, r1, c1);
    } else {
        printf("Addition and subtraction not possible (dimensions don't match)\n");
    }

    if (c1 == r2) {
        multiplyMatrix(mat1, mat2, result, r1, c1, c2);
        printf("Multiplication:\n");
        printMatrix(result, r1, c2);
    } else {
        printf("Multiplication not possible (columns of first matrix != rows of second matrix)\n");
    }

    return 0;
}

