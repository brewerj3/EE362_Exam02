#include <stdlib.h>
#include <stdio.h>


int game(int n) {
    n++; //to simplify the primality test add one to n
    if (n == 2 || n == 3) {
        return 1;
    }
    if ((n <= 1)|| (n % 2 == 0) || (n % 3 == 0)) {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

void main() {
    for (int i = 2; i <= 12; i++) {
        printf("game(%2d)=%d\n", i, game(i));
    }
}