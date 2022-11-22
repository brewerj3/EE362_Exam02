#include <stdlib.h>
#include <stdio.h>

int binomial(int n, int k) {
    if(k == 0 || k == n) {
        return 1;
    }
    return binomial(n-1, k-1) + binomial(n - 1, k);
}

int blocks(int h) {
    int cmOneBlock = binomial(h,1);
    int twoCmBlock = binomial(h,2);
    int fourCmBlock = binomial(h+4-1,4);
    //printf("1cm = %i 2cm = %i 4cm = %i \n",cmOneBlock,twoCmBlock,fourCmBlock);
    if(h < 2) {
        return cmOneBlock;
    }
    if(h < 4) {
        return cmOneBlock +twoCmBlock;
    }
    return cmOneBlock;
}

void main() {
    printf("Number of constructions of blocks of height h\n");
    for (int h = 1; h <= 15; h++) {
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}