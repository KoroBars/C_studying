#include <stdio.h>

// Написать void функцию, которая считает площадь прямоугольника по 2 сторонам, и записывает результат в переменную,
// которая передаётся в данную функцию по адресу.

void calc_square_rectangle_pointer(int* p_s, int a, int b) {
    *p_s = a * b;
    a = 4;
}

double calc_square_triangle(int a, int h) {
    double result = a / 2.0 * h;
    return result;
}

void calc_determinant_pointer(int* p_result_determinant, int a, int b, int c) {
    *p_result_determinant = b * b - 4 * a * c;
}

int main() {
    int a = 2;
    int b = 3;
    int s;
    calc_square_rectangle_pointer(&s, a, b);
    printf("s = %d * %d = %d\n", a, b, s);

    a = 3;
    int h = 4;
    double result = calc_square_triangle(a, h);
    printf("%f\n", result);

    a = 5;
    b = 7;
    int c = 1;
    int result_determinant;
    calc_determinant_pointer(&result_determinant, a, b, c);
    printf("D = %d^2 - 4 * %d * %d = %d ", a, b, c, result_determinant);
}