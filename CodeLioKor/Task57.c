#include <stdio.h>

int find_max_of_3(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int find_min_of_3(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    } else if (b < a && b < c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = find_max_of_3(a, b, c);
    int min = find_min_of_3(a, b, c);

    printf("%d %d", max, min);

    return 0;
}
