#include <stdio.h>
#include <stdlib.h>

int calculate_average(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i <= size; i++) {  // バグあり
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int avg = calculate_average(data, 5);
    printf("Average: %d\n", avg);
    return 0;
}
