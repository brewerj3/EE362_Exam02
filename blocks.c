#include <stdlib.h>
#include <stdio.h>

int blocks(int h)
{
    return 0;
}

void main()
{
    printf("Number of constructions of blocks of height h\n");
    for (int h=1; h<=15; h++) {
        printf("h=%2d: %5d\n", h, blocks(h));
    }
}