// optimize_test.c
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int result = fibonacci(40);
    printf("fibonacci(40) = %d\n", result);
    return 0;
}
