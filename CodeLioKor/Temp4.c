#include <stdio.h>
#include <assert.h>

int find_max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int find_max_3 (int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    assert(find_max(100, 200) == 200);
    assert(find_max(0, 1) == 1);
    assert(find_max(-11, 11) == 11);
    assert(find_max(1000000, -231) == 1000000);

    assert(find_max_3(100, 200, 300) == 300);
    assert(find_max_3(-1, 95, 15) == 95);
    assert(find_max_3(0, -1, -2) == 0);

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", find_max(a, b));

    return 0;
}
