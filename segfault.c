// segfault.c
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int value;
} Data;

void process_data(Data *data) {
    printf("Processing: %s\n", data->name);
    data->value *= 2;
}

int main() {
    Data *items[3];
    for(int i = 0; i < 3; i++) {
        items[i]->value = i * 10;  // バグあり
        strcpy(items[i]->name, "Item");
    }
    for(int i = 0; i < 3; i++) {
        process_data(items[i]);
    }
    return 0;
}
