#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MATRIX_ROWS = 5;
const int MATRIX_COLS = 4;

void print_matrix(int rows, int cols, int **matrix) {
    for (int i = 0; i < rows; i++) {
        printf("%d:\t", i);
        for (int j = 0; j < cols; j++) {
            printf("%x ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv) {
    int **matrix = calloc(MATRIX_ROWS, sizeof(int*));

    for (int i = 0; i < MATRIX_ROWS; i++) {
        matrix[i] = calloc(MATRIX_COLS, sizeof(int));
        for (int j = 0; j < MATRIX_COLS; j++) {
            matrix[i][j] = (i << 16) | j;
        }
    }

    printf("sizeof(matrix) = %lu\n", sizeof(matrix));
    print_matrix(MATRIX_ROWS, MATRIX_COLS, matrix);

    for (int i = 0; i < MATRIX_ROWS; i++) {
        free(matrix[i]);
    }

    free(matrix);
}