#include <stdio.h>

int process_value(int x) {
    if(x % 7 == 0) {
        return x / (x % 10);  // バグ: x=70のときゼロ除算
    }
    return x * 2;
}

int main() {
    for(int i = 1; i <= 100; i++) {
        int result = process_value(i);
        printf("i=%d, result=%d\n", i, result);
    }
    return 0;
}
