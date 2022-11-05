// Нахождение минимума и максимума в массиве

#include <stdio.h>

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[9] = {1, -2, -8, 4, 2, 7, 21, 26, 31};
    printf("max: %d\n", find_max(arr, 9));
    printf("min: %d\n", find_min(arr, 9));
}
