#include <stdio.h>

int main() {
    int arr[] = {1, 26, 23, 19, 31};
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2));
}