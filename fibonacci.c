#include <stdio.h>
#include <time.h>

// 再帰的なフィボナッチ数列（非効率的）
long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 45;
    clock_t start = clock();
    long long result = fibonacci(n);
    clock_t end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("fibonacci(%d) = %lld\n", n, result);
    printf("実行時間: %.2f秒\n", time_taken);
    return 0;
}
