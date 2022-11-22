#include <stdlib.h>
#include <stdio.h>



int blocks(int h) {
    switch(h) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 6;
        default:
            return blocks(h - 1) + blocks(h - 2) + blocks(h - 4);
    }
}

int main() {
    printf("Number of constructions of blocks of height h\n");
    for (int h = 1; h <= 15; h++) {
        //printf("In for loop \n");
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}