#include <stdio.h>

int main() {
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = (a + b) - 1;
    printf("%d %d", result - a, result - b);
    return 0;
}