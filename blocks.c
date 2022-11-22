#include <stdlib.h>
#include <stdio.h>



int blocks(int h) {
    if (h == 1) {
        return 1;
    }
    if (h == 2) {
        return 2;
    }
    if (h == 3) {
        return 3;
    }
    if (h == 4) {
        return 6;
    }
    return blocks(h - 1) + blocks(h - 2) + blocks(h - 4);
}

int main() {
    printf("Number of constructions of blocks of height h\n");
    for (int h = 1; h <= 15; h++) {
        //printf("In for loop \n");
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}