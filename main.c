// main.c
#include <stdio.h>
#include "math_ops.h"

int main() {
    int a = 20, b = 4;
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %d\n", a, b, divide(a, b));
    return 0;
}
