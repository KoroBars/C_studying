#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = malloc(sizeof(*arr) * 5000);
    for (int i = 0; i < 5000; i++) {
        arr[i] = i;
    }
    arr = realloc(arr, sizeof(*arr) * 10000);
    for (int i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;

    return 0;
}
