#include <stdio.h>

int add3(int i, int j, int k) {
    return i + j + k;
}

int main() {
    int i = 12;
    int j = 10;
    int k = 22;

    int result = add3(i, j, k);

    printf("add3(%i, %i, %i) = %i\n", i, j, k, result);
}
