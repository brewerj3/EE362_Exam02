#include <stdlib.h>
#include <stdio.h>

int binomial(int n, int k) {
    if (k < 0 || n < 0) {
        return 1;
    }
    if (k == 0 || k == n || n == 0) {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int blocks(int h) {
    //printf("in blocks\n");
    int oneCmBlocks = binomial(h, 1);
    int twoCmBlocks = binomial(h, 2);
    int fourCmBlocks = binomial(h, 4);
    printf("1cm Blocks = %4i  |  2cm Blocks = %4i  |  4cm Blocks = %4i\n", oneCmBlocks, twoCmBlocks, fourCmBlocks);
    if(h < 2) {
        return oneCmBlocks;
    }
    if(h<4) {
        return oneCmBlocks+twoCmBlocks;
    }
    return binomial(h, 1) + binomial(h, 2) + binomial(h, 4);
}

int main() {
    printf("Number of constructions of blocks of height h\n");
    for (int h = 1; h <= 15; h++) {
        //printf("In for loop \n");
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}