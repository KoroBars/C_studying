#include <stdio.h>

int main() {
    int a, b, result;
    char operation;
    scanf("%d %c %d", &a, &operation, &b);

    if (operation == '+') {
        result = a + b;
    } else if (operation == '-') {
        result = a - b;
    } else if (operation == '/') {
        result = a / b;
    } else {
        result = a * b;
    }

    printf("%d %c %d = %d", a, operation, b, result);

    return 0;
}
