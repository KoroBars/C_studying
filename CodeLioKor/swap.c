// Написать функцию, которая меняет местами значения 2 целочисленных переменных.
// Привести пример использования.
#include <stdio.h>

void swap(int* p_a, int* p_b) {
    int d = *p_a;
    *p_a = *p_b;
    *p_b = d;
}

int main() {
    int a = 26, b = 31;
    swap(&a, &b);
    printf("%d %d", a, b);
}