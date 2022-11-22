#include <stdlib.h>
#include <stdio.h>

int binomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int blocks(int h) {
    return binomial(h,1) * binomial(h,2) * binomial(h, 4);
}

void main() {
    printf("Number of constructions of blocks of height h\n");
    for (int h = 1; h <= 15; h++) {
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}