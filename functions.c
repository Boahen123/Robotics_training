#include <stdio.h>

int linear(int x);

void main() {
    int result;
    result = linear(1);
    printf("result = %d", result);
}

int linear(int x) {
    int y;
    y = 2 * x;
    return y;
}