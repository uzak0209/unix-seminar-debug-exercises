#include <stdio.h>

int main() {
    int x;            // 未初期化
    int y = 10;       // 未使用
    return x;         // バグ！
}
