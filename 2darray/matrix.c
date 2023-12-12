#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MATRIX_ROWS = 5;
const int MATRIX_COLS = 4;

int main(int argc, char **argv) {
    int matrix[MATRIX_ROWS][MATRIX_COLS];

    for (int i = 0; i < MATRIX_ROWS; i++) {
        for (int j = 0; j < MATRIX_COLS; j++) {
            matrix[i][j] = (i << 16) | j;
        }
    }

    printf("sizeof(matrix) = %lu", sizeof(matrix));
}