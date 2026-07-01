#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int value;
} Data;

int main() {
    Data *items[3];
    for(int i = 0; i < 3; i++) {
        items[i]->value = i * 10;  // バグ: ポインタ未初期化
        strcpy(items[i]->name, "Item");
    }
    return 0;
}
